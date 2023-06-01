/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:54:14 by rrask             #+#    #+#             */
/*   Updated: 2023/06/01 15:21:53 by rrask            ###   ########.fr       */
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
	(void)b;
	if ((*a)->amount == 2)
	{
		if ((*a)->data > (*a)->next->data)
		{
			ft_printf("What");
			swap(a, "sa");
		}
		return (a);
	}
	if ((*a)->amount == 3)
		mini_sort(a);
	else if ((*a)->amount > 3)
		ft_printf("Might be good to use radix here.");
	return (a);
}
