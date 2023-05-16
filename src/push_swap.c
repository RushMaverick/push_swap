/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:47:32 by rrask             #+#    #+#             */
/*   Updated: 2023/05/16 10:33:54 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		invalid_error("Error");
	if (argc == 2)
		arg_string_validity(argv[1]);
	if (argc > 2)
	{
		while (i < argc)
		{
			if (ft_atoi(argv[i]) == -1 || ft_atoi(argv[i]) == 0)
				invalid_error("Error");
			parse_arguments(argv[i]);
			i++;
		}
	}
	return (0);
}
