/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:56:25 by bsousa-d          #+#    #+#             */
/*   Updated: 2023/06/23 11:52:01 by brunolopes       ###   ########.fr       */
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
		run_default("./maps/map_120x20");
	return (0);
}
