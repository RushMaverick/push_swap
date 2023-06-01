/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:35:03 by rrask             #+#    #+#             */
/*   Updated: 2023/06/01 13:49:20 by rrask            ###   ########.fr       */
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
		temp = &(*temp)->next;
	}
	ft_printf("TEMP INDEX %d\n", (*temp)->index);
	ft_printf("END INDEX %d\n", (*end)->index);
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
		*smallest = *top;
	}
	*top = (*top)->next;
}

void	indexing(t_stack **head)
{
	t_stack *end;
	t_stack *temp;
	t_stack *smallest;

	smallest = NULL;
	if (!(*head)->index)
	{
		(*head)->index = 1;
		return ;
	}
	end = last_node(*head);
	temp = *head;
	while (temp->next != NULL)
	{
		set_smallest(&temp, &end, &smallest);
		if ((end)->index <= (temp)->index)
			(temp)->index++;
	}
	set_index(&temp, head, &end, &smallest);
}