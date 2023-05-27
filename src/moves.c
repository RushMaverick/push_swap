/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:16:25 by rrask             #+#    #+#             */
/*   Updated: 2023/05/27 10:36:33 by rrask            ###   ########.fr       */
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

void    swap(t_stack **head)
{
    t_stack    *first_node;
    t_stack    *second_node;
    t_stack    *third_node;

    if (*head == NULL || (*head)->next == NULL)
        return ;
    first_node = *head;
    second_node = (*head)->next;
    third_node = (*head)->next->next;
    second_node->next = first_node;
    first_node->next = third_node;
    *head = second_node;
}

void	ss(t_stack *a, t_stack *b)
{
	swap(&a);
	swap(&b);
}

void	rotate(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	while (stack->next != NULL)
		stack = stack->next;
	stack->next = temp;
	temp->next = NULL;
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
