/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:25:00 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/06/23 13:15:48 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	check_info(char *str, int *test)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
		i++;
	test[3] = str[--i];
	test[2] = str[--i];
	test[1] = str[--i];
	test[0] = ft_atoi(str);
	if (test[1] == test[2] || test[2] == test[3] || test[1] == test[3])
		test[6] = 0;
	i = 1;
	while (i < 4)
	{
		if (test[i] < 32 || test[i] == 127)
			test[6] = 0;
		i++;
	}
}

int	map_width(char *str)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (str[i] != '\n')
		i++;
	j = 0;
	i++;
	while (str[i] != '\n')
	{
		j++;
		i++;
	}
	temp = check_size_lenght(str, ++i, ++j);
	if (temp == 0)
		return (0);
	return (j);
}

void	print(char *str)
{
	int	i;

	i = -1;
	if(!str[0])
		write(1, "Map error\n", 10);
	while (str[++i] != '\0')
		write(1, &str[i], 1);
	write(1, "\n", 1);
}

int	check_size_lenght(char *str, int second_line, int size)
{
	int	i;
	int	j;

	i = second_line;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != '\n')
		{
			i++;
			j++;
		}
		if (++j != size)
			return (0);
		i++;
	}
	return (size);
}
