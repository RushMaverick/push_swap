/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_four.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:30:09 by rrask             #+#    #+#             */
/*   Updated: 2023/06/05 16:43:45 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	how_many_moves(t_stack **a, int index)
{
	int		moves;
	t_stack	*temp;

	temp = *a;
	moves = 0;
	while (temp->index != index)
	{
		moves++;
		temp = temp->next;
	}
	return (moves);
}

static void	arg_four(t_stack **head_a, t_stack **head_b)
{
	int	moves;

	moves = how_many_moves(head_a, 1);
	if (moves == 1 || moves == 2 || moves == 3)
	{
		while ((*head_a)->index != 1)
			rotate(head_a, "ra\n");
	}
	if (moves == 4 || moves == 5)
	{
		while ((*head_a)->index != 1)
			rev_rotate(head_a, "rra\n");
	}
	push(head_a, head_b, "pb\n");
}

void	sort_four_five(t_stack **head_a, t_stack **head_b)
{
	int	moves;

	if (is_sorted(head_a) == 0)
		return ;
	arg_four(head_a, head_b);
	if ((*head_a)->amount == 5)
	{
		moves = how_many_moves(head_a, 2);
		if (moves == 1 || moves == 2 || moves == 3)
		{
			while ((*head_a)->index != 2)
				rotate(head_a, "ra\n");
		}
		if (moves == 4 || moves == 5)
		{
			while ((*head_a)->index != 2)
				rev_rotate(head_a, "rra\n");
		}
		push(head_a, head_b, "pb\n");
	}
	sort_three(head_a);
	if ((*head_a)->amount == 5)
		push(head_b, head_a, "pa\n");
	push(head_b, head_a, "pa\n");
}
