/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:54:14 by rrask             #+#    #+#             */
/*   Updated: 2023/05/24 13:45:36 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_sorted(t_stack **a)
{
	while ((*a)->next != NULL)
	{
		if ((*a)->data < (*a)->next->data)
			ft_printf("Sorted");
		a = &(*a)->next;
	}
}

void	sort_it(t_stack **a)
{
	// t_stack	**b;

	// b = malloc(sizeof(a));
	// if (!b)
	// {
	// 	freeing_stack(a);
	// 	exit(0);
	// }
	(*a)->head = (*a);
	is_sorted(a);
	if ((*a)->amount == 2)
		ft_printf("2 arguments");
	if ((*a)->amount == 3)
		ft_printf("3 arguments");
	if ((*a)->amount > 3)
		ft_printf("Might be good to use radix here.");
	// freeing_stack(a);
}
