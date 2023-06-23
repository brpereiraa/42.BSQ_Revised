/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:45:01 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/06/23 11:52:44 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void	run_code(int argc, char **argv)
{
	char	*str;
	int		len;
	int		max;
	int		arr[7];

	len = size_of_map(argv[argc]);
	if (len != 0)
	{
		str = malloc(sizeof(char) * len);
		map(str, len, argv[argc]);
		check_info(str, arr);
		if (map_width(str) == 0 || arr[6] == 0)
		{
			write(1, "Map error\n", 10);
			return ;
		}
		max = max_size(str, arr, map_width(str));
		verify_square(str, max, map_width(str), arr);
		if (arr[4] == 0)
			return ;
		print_square(str, arr, map_width(str));
		print(str);
	}
	else
		write(1, "Map error\n", 10);
}

void	run_default(char *file)
{
	char	*str;
	int		len;
	int		max;
	int		arr[7];

	len = size_of_map(file);
	if (len != 0)
	{
		str = malloc(sizeof(char) * len);
		map(str, len, file);
		check_info(str, arr);
		if (map_width(str) == 0 || arr[6] == 0)
		{
			write(1, "Map error\n", 10);
			return ;
		}
		max = max_size(str, arr, map_width(str));
		verify_square(str, max, map_width(str), arr);
		if (arr[4] == 0)
			return ;
		print_square(str, arr, map_width(str));
		print(str);
	}
	else
		write(1, "Map error\n", 10);
}
