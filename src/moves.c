/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:16:25 by rrask             #+#    #+#             */
/*   Updated: 2023/05/26 10:43:15 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.
// sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.
// ss : sa and sb at the same time.
// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.
// pb (push b): Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.

void	swap(t_stack *head)
{
	t_stack	*temp;

	temp = head->next;
	head->next = head->next->next;
	temp->next = head;
	head = temp;
}

void	ss(t_stack **a, t_stack **b)
{
	swap(&(*a));
	swap(&(*b));
}

void	push(t_stack *head)
{
	t_stack	*n_head;
	t_stack	*second;
	t_stack	*next_to_last;
	t_stack	*last;

	n_head = head;
	while (n_head->next != NULL)
		last = n_head->next;
}
/*        t_node *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }

        current->next = new_node;
        new_node->prev = current;
		*/

// void	pb(t_stack **a, t_stack **b)
// {
// 	void	((*a));
// 	void	((*b));
//  //Logic here
// }
