/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:30:09 by rrask             #+#    #+#             */
/*   Updated: 2023/06/02 11:19:56 by rrask            ###   ########.fr       */
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

static	void find_indexes(t_stack *smallest, t_stack *second_smallest, t_stack **top)
{
	t_stack *temp;
	t_stack *curr_first;
	t_stack *curr_second;
	
	temp = *top;
	curr_first = NULL;
	curr_second = NULL;
	while (temp->next != NULL)
	{
		if (curr_first == NULL)
		{
			curr_first = temp;
			curr_second = temp;
		}
		if (temp->index < curr_first->index)
			curr_first = temp;
		if (temp->index != curr_first->index && temp->index < curr_second->index)
			curr_second = temp;
		temp = temp->next;
	}
	smallest = curr_first;
	second_smallest = curr_second;
}

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
	(void)head_b;
	t_stack *smallest;
	t_stack *second_smallest;
	
	smallest = NULL;
	second_smallest = NULL;
	find_indexes(smallest, second_smallest, head_a);
	ft_printf("%d\n", smallest->index);
	ft_printf("%d\n", second_smallest->index);
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
