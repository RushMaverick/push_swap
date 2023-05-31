/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:30:09 by rrask             #+#    #+#             */
/*   Updated: 2023/05/31 17:00:25 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sorted(t_stack **head)
{
	t_stack *temp;

	temp = *head;
	while (temp->next != NULL)
	{
		if (temp->data > temp->next->data)
			return (1);
		temp = temp->next;
	}
	return (0);
}

void	mini_sort(t_stack **head_a, t_stack **head_b)
{	
	t_stack *first;
	t_stack *second;
	t_stack *third;
	
	first = *head_a;
	second = next_to_last_node(*head_a);
	third = last_node(*head_a);
	
	(void)head_b;
	if (is_sorted(head_a) == 0)
		return ;
	if (third->data > first->data && third->data > second->data)
	{
		swap(head_a, "sa\n");
		return ;
	}
     if (first->data > second->data && first->data > third->data)
    {
        rotate(head_a, "ra\n");
        if (first->data > second->data)
            swap(head_a, "sa\n");
        return ;
    }
	if (second->data > first->data && second->data > third->data)
    {
		rev_rotate(head_a, "rra\n");
        if (first->data > second->data)
            swap(head_a, "sa\n");
        return ;
    }
}

