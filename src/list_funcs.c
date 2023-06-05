/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:36:17 by rrask             #+#    #+#             */
/*   Updated: 2023/06/05 16:38:30 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*node_create(int nbr)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->index = 0;
	new_node->data = nbr;
	new_node->next = NULL;
	return (new_node);
}

void	lstadd_back(t_stack **stack, int nbr)
{
	t_stack	*curr;

	if ((*stack) == NULL)
	{
		(*stack) = node_create(nbr);
		(*stack)->amount = 1;
		return ;
	}
	curr = (*stack);
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = node_create(nbr);
	(*stack)->amount++;
	curr = (*stack);
	while (curr)
	{
		curr->amount = (*stack)->amount;
		curr = curr->next;
	}
}
