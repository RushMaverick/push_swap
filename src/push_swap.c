/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:47:32 by rrask             #+#    #+#             */
/*   Updated: 2023/05/16 14:39:51 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		return (0);
	if (argc == 2)
		arg_string_validity(argv[1]);
	if (argc > 2)
	{
		while (i < argc)
		{
			int_min_max_handler(argv[i]);
			parse_arguments(argv[i]);
			set_to_stack(argv[i]);
			i++;
		}
	}
	return (0);
}
