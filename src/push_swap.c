/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:47:32 by rrask             #+#    #+#             */
/*   Updated: 2023/05/18 14:17:51 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;

	// t_stack	**a;
	// a = malloc(sizeof(t_stack));
	i = 1;
	if (argc < 2)
		return (0);
	while (argv[i])
	{
		if (arg_string_validity(argv[i]))
			ft_printf("Moi\n");
		else
			invalid_error("Error");
		i++;
	}
	return (0);
}
