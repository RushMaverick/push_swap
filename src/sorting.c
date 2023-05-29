/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:54:14 by rrask             #+#    #+#             */
/*   Updated: 2023/05/29 16:04:34 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_sorted(t_stack **a)
{
	while ((*a)->next != NULL)
	{
		if ((*a)->data < (*a)->next->data && (*a)->next != 0)
			ft_printf("Sorted\n");
		a = &(*a)->next;
	}
}

t_stack	**sort_it(t_stack **a, t_stack **b)
{
	//How to allocate for stack b?
	// is_sorted(a);

	(void) b;
	if ((*a)->amount == 2 || (*a)->amount == 3)
		push(a, b);
	else if ((*a)->amount > 3)
		ft_printf("Might be good to use radix here.");
	return (a);
}
