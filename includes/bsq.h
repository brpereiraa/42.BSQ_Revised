/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:42:24 by brunolopes        #+#    #+#             */
/*   Updated: 2023/06/22 14:47:50 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int		size_of_map(char *map);
int		check_width(char *str, char obstacle);
int		check_height(char *str, int *arr, int width);
void	verify_square(char *str, int len, int columns, int *arr);
char	*print_square(char *str, int *arr, int width);
int		whitespaces(char *str, int *ptr_i);
int		ft_atoi(char *str);
void	check_info(char *str, int *test);
void	map(char *str, int len, char *map);
int		max_size(char *str, int *arr, int width);
int		map_width(char *str);
void	print(char *str);
void	rev_arg(char **maps, int size);
void	run_code(int argc, char **argv);
void	run_default(char *file);
int		check_size_lenght(char *str, int second_line, int size);

