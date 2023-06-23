# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 14:49:36 by brunolopes        #+#    #+#              #
#    Updated: 2023/06/23 09:43:34 by brunolopes       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = src/main.c src/run.c src/info.c src/map.c src/square.c src/utils.c

OBJS = ${SRCS:.c=.o}

all: ${NAME}
	
${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS}  

clean:
	rm -fr ${OBJS}

fclean: clean
	rm -fr ${NAME}

re: fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRCS) 
	cc -shared libft.so $(OBJS) 