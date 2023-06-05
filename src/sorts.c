/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:30:09 by rrask             #+#    #+#             */
/*   Updated: 2023/06/05 10:15:03 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	how_many_moves(t_stack **a, int index)
{
	int moves;
	t_stack *temp;
	
	temp = *a;
	moves = 0;
	while (temp->index != index)
	{
		moves++;
		temp = temp->next;
	}
	return (moves);
}

static void	sort_three(t_stack **head_a)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*third;

	first = (*head_a);
	second = next_to_last_node(*head_a);
	third = last_node(*head_a);
	if (is_sorted(head_a) == 0)
		return ;
	else if (third->index > first->index && third->index > second->index)
	{
		swap(head_a, "sa\n");
		return ;
	}
	else if (first->index > second->index && first->index > third->index)
	{
		rotate(head_a, "ra\n");
		if (is_sorted(head_a) == 0)
			return ;
		if (first->index > second->index)
			swap(head_a, "sa\n");
		return ;
	}
	else if (second->index > first->index && second->index > third->index)
	{
		rev_rotate(head_a, "rra\n");
		if (is_sorted(head_a) == 0)
			return ;
		if (first->index > second->index || first->index < second->index)
			swap(head_a, "sa\n");
		return ;
	}
}

static void	sort_four_five(t_stack **head_a, t_stack **head_b)
{
	int	moves;

	if (is_sorted(head_a) == 0)
		return ;
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

void	mini_sort(t_stack **head_a, t_stack **head_b)
{
	if ((*head_a)->amount == 3)
		sort_three(head_a);
	if ((*head_a)->amount == 4 || (*head_a)->amount == 5)
		sort_four_five(head_a, head_b);
}
