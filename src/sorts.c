/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:30:09 by rrask             #+#    #+#             */
/*   Updated: 2023/05/31 11:26:14 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	is_sorted(t_stack **head)
// {
// 	t_stack *temp;

// 	temp = *head;
// 	if (temp->data > temp->next->data)
// 	{
// 		if (temp->next->data < temp->next->next->data)
// 		{
// 			rotate(head, "ra\n");
// 			return ;
// 		}
// 		rotate(head, "ra\n");
// 		swap(head, "sa\n");
// 	}
// }

void	mini_sort(t_stack **head_a, t_stack **head_b)
{	
	t_stack *first_node;
	t_stack *second_node;
	t_stack *third_node;
	
	first_node = *head_a;
	second_node = next_to_last_node(*head_a);
	third_node = last_node(*head_a);
	
	if (first_node->data < second_node->data // 1, 3, 2
		&& second_node->data > third_node->data)
		{
			push(head_a, head_b, "pa\n");
			swap(head_a, "sa\n");
			push(head_b, head_a, "pb\n");
		}
	// else if (first_node->data > second_node->data)// 2 1 3 || 2 3 1 
	// 	{
	// 		if (second_node->data > third_node->data)
	// 			rev_rotate(head_a, "rra\n");
	// 	}
	// else if (first_node->data < second_node->data)
	// {
		
	// }
	// else if (first_node->data > second_node->data)// 3, 1, 2
	// 	{
	// 		if (second_node->data < third_node->data)
	// 			rotate(head_a, "ra\n");
	// 	}
	else if (first_node->data > second_node->data // 3 2 1
		&& second_node->data > third_node->data)
	{
		rotate(head_a, "ra\n");
		swap(head_a, "sa\n");
	}
}
