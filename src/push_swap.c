/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:47:32 by rrask             #+#    #+#             */
/*   Updated: 2023/05/22 11:18:59 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	char	**nbrs;
	int		i;
	int		k;

	a = NULL;
	i = 1;
	k = 0;
	if (argc < 2)
		return (0);
	while (argv[i])
	{
		nbrs = arg_string_validity(argv[i]);
		while (nbrs[k])
		{
			lstadd_back(&a, ft_atoi(nbrs[k]));
			k++;
		}
		k = 0;
		i++;
	}
	print_list(&a);
	return (0);
}
