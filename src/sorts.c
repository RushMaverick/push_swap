/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:30:09 by rrask             #+#    #+#             */
/*   Updated: 2023/05/26 10:22:04 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	**mini_sort(t_stack **head)
{
	t_stack	*n_head;
	t_stack	*next;

	n_head = *head;
	next = (*head)->next;
	if (n_head ->amount == 2)
	{
		if (n_head->data > next->data)
			swap(&head);
		else
			return (head);
	}
	else if (n_head->amount == 3)
	{
		if (n_head->data > next->next->data)
			//push top
		return (head);
	}
	return (NULL);
}
