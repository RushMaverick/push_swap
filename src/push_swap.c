/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:47:32 by rrask             #+#    #+#             */
/*   Updated: 2023/06/02 15:10:46 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	handle_args(t_stack **a, char **arg)
{
	char	**nbrs;
	int		i;
	int		n;

	i = 1;
	n = 0;
	while (arg[i])
	{
		nbrs = arg_string_validity(arg[i]);
		if (!nbrs)
			invalid_error("Error");
		n = 0;
		while (nbrs[n])
		{
			lstadd_back(&(*a), ft_atoi(nbrs[n]));
			indexing(&(*a));
			n++;
		}
		freeing_array(nbrs);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < ARG_MIN)
		return (0);
	handle_args(&a, argv);
	check_duplicates(a);
	print_list(a);
	print_list(b);
	sort_it(&a, &b);
	print_list(a);
	freeing_stack(&a);
	freeing_stack(&b);
	return (0);
}
