/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:56:25 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/06/22 15:19:04 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	main(int argc, char **argv)
{
	rev_arg(argv, argc);
	if (argc != 1)
	{
		while (argc-- > 1)
			run_code(argc, argv);
	}
	else
	{
		run_default("maps/example_file");
	}
	return (0);
}
