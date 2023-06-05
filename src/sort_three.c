/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:40:25 by rrask             #+#    #+#             */
/*   Updated: 2023/06/05 16:42:37 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_case_one(t_stack **head_a)
{
	t_stack	*first;
	t_stack	*second;

	first = (*head_a);
	second = next_to_last_node(*head_a);
	rotate(head_a, "ra\n");
	if (is_sorted(head_a) == 0)
		return ;
	if (first->index > second->index)
		swap(head_a, "sa\n");
	return ;
}

void	sort_three_case_two(t_stack **head_a)
{
	t_stack	*first;
	t_stack	*second;

	first = (*head_a);
	second = next_to_last_node(*head_a);
	rev_rotate(head_a, "rra\n");
	if (is_sorted(head_a) == 0)
		return ;
	if (first->index > second->index || first->index < second->index)
		swap(head_a, "sa\n");
	return ;
}

void	sort_three(t_stack **head_a)
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
		sort_three_case_one(head_a);
	else if (second->index > first->index && second->index > third->index)
		sort_three_case_two(head_a);
}

void	mini_sort(t_stack **head_a, t_stack **head_b)
{
	if ((*head_a)->amount == 3)
		sort_three(head_a);
	if ((*head_a)->amount == 4 || (*head_a)->amount == 5)
		sort_four_five(head_a, head_b);
}
