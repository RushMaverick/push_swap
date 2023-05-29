/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:30:09 by rrask             #+#    #+#             */
/*   Updated: 2023/05/29 12:14:15 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mini_sort(t_stack **head)
{
	t_stack	*next;

	next = (*head)->next;
	if ((*head)->amount == 2)
	{
		if ((*head)->data > next->data)
			swap(head);
	}
	else if ((*head)->amount == 3)
	{
		if ((*head)->data > next->next->data)
			rev_rotate(head);
	}
}
