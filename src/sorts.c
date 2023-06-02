/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:30:09 by rrask             #+#    #+#             */
/*   Updated: 2023/06/02 15:02:02 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sorted(t_stack **head)
{
	t_stack	*temp;

	temp = *head;
	while (temp != NULL)
	{
		if (temp->data > temp->next->data)
			return (1);
		temp = temp->next;
	}
	return (0);
}

// static	void find_indexes(t_stack **smallest, t_stack **second_smallest, t_stack **top)
// {
// 	t_stack *temp;
	
// 	temp = *top;
// 	while (temp != NULL)
//     {
//         if (temp->index == 1)
// 		{
//             *smallest = temp;
// 			while ((*top)->index != (*smallest)->index)
// 			{
// 				if ((*top)->index == (*smallest)->index)
// 					push()
// 				rotate(top, "ra\n");
// 			}
// 		}
//         if (temp->index == 2)
// 		{
//            *second_smallest = temp;
// 			while ((*top)->index != (*second_smallest)->index)
// 				rotate(top, "ra\n");
// 		}
//         temp = temp->next;
//     }
// }

static void	sort_three(t_stack **head_a, t_stack *first, t_stack *second)
{
	t_stack	*third;

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
		if (first->index > second->index)
			swap(head_a, "sa\n");
		return ;
	}
	else if (second->index > first->index && second->index > third->index)
	{
		rev_rotate(head_a, "rra\n");
		if (is_sorted(head_a) == 0)
			return ;
		if (first->index < second->index)
			swap(head_a, "sa\n");
		return ;
	}
}

static	void sort_five(t_stack **head_a, t_stack **head_b)
{
	t_stack *smallest;
	t_stack *second_smallest;
	t_stack *temp;
	
	smallest = NULL;
	second_smallest = NULL;
	temp = *head_a;
	// find_indexes(&smallest, &second_smallest, head_a);
	while ((*head_a)->index != 1)
		rotate(head_a, "ra\n");
	push(head_a, head_b, "pb\n");
	while ((*head_a)->index != 2)
		rotate(head_a, "ra\n");
	push(head_a, head_b, "pb\n");
	// sort_three()
	push(head_b, head_a, "pa\n");
	push(head_b, head_a, "pa\n");
}

void	mini_sort(t_stack **head_a, t_stack **head_b)
{
	t_stack	*first;
	t_stack	*second;
	
	first = *head_a;
	second = next_to_last_node(*head_a);
	if ((*head_a)->amount == 3)
		sort_three(head_a, first, second);
	if ((*head_a)->amount == 5)
		sort_five(head_a, head_b);
}
