/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:54:14 by rrask             #+#    #+#             */
/*   Updated: 2023/06/05 11:54:59 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack **head)
{
	t_stack	*temp;

	temp = *head;
	while (temp->next != NULL)
	{
		if (temp->index > temp->next->index)
			return (1);
		temp = temp->next;
	}
	return (0);
}

static void	my_rad_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	max_num;
	int	num;
	int	max_bits;
	int	size;
	int	i;
	int	j;

	size = (*stack_a)->amount;
	max_num = size - 1;
	max_bits = 0;
	i = 0;
	while ((max_num >> max_bits) != 0)
		++max_bits;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			num = (*stack_a)->index;
			if (((num >> i) & 1) == 1)
				rotate(stack_a, "ra\n");
			else
				push(stack_a, stack_b, "pb\n");
			++j;
		}
		while (*stack_b)
			push(stack_b, stack_a, "pa\n");
		i++;
	}
}

t_stack	**sort_it(t_stack **a, t_stack **b)
{
	if ((*a)->amount == 2)
	{
		if ((*a)->index > (*a)->next->index)
			swap(a, "sa");
		return (a);
	}
	if ((*a)->amount == 3 || (*a)->amount == 4 || (*a)->amount == 5)
		mini_sort(a, b);
	else if ((*a)->amount > 5)
	{
		if (is_sorted(a) == 0)
			return (a);
		my_rad_sort(a, b);
	}
	return (a);
}
