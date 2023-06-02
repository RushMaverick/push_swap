/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:35:03 by rrask             #+#    #+#             */
/*   Updated: 2023/06/02 10:50:35 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void set_index(t_stack **temp, t_stack **head, t_stack **end, t_stack **smallest)
{
	if ((*smallest) != NULL)
		(*end)->index = (*smallest)->index;
	*temp = *head;
	while ((*temp)->next != NULL)
	{
		if ((*end)->index <= (*temp)->index)
			(*temp)->index++;
		*temp = (*temp)->next;
	}
}

static	void set_smallest(t_stack **top, t_stack **end, t_stack **smallest)
{
	if ((*top)->data > (*end)->data)
	{
		if ((*smallest) != NULL)
		{
			if ((*top)->data < (*smallest)->data)
				*smallest = *top;
		}
		else
			*smallest = *top;
	}
	*top = (*top)->next;
}

void	indexing(t_stack **head)
{
	int		place;
	t_stack *end;
	t_stack *temp;
	t_stack *smallest;
	t_stack *count;

	smallest = NULL;
	end = last_node(*head);
	temp = *head;
	count = *head;
	place = 1;
	while (count->next != NULL)
	{
		count = count->next;
		place++;
	}
	if (!(*head)->index)
		(*head)->index = place;
	while (temp->next != NULL)
	{
		set_smallest(&temp, &end, &smallest);
		if (temp->next == NULL)
			temp->index = place;
	}
	set_index(&temp, head, &end, &smallest);
}