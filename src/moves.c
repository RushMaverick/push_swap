/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:16:25 by rrask             #+#    #+#             */
/*   Updated: 2023/05/30 09:42:46 by rrask            ###   ########.fr       */
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

t_stack *last_node(t_stack *head)
{
    if (!head)
        return (NULL);
    while (head->next != NULL)
        head = head->next;
    return (head);
}

t_stack *next_to_last_node(t_stack *head)
{
    if (!head)
        return (NULL);
    while (head->next->next && head->next->next != NULL)
        head = head->next;
    return (head);
}

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

void	rotate(t_stack **head) //The first element becomes the last one.
{
	t_stack	*node;
	t_stack	*node_two;

    if (*head == NULL)
        return ;

    node = *head;
	node_two = (*head)->next;
	*head = last_node(*head);
	(*head)->next = node;
	node->next = NULL;
	*head = node_two;
}

void	rev_rotate(t_stack **head) //The last element becomes the first one.
{
	t_stack	*node;
	t_stack	*node_three;

    if (*head == NULL)
        return ;
    node = last_node(*head);
    node_three = next_to_last_node(*head);
    node->next = *head;
    node_three->next = NULL;
    *head = node;
}

void    push(t_stack **src, t_stack **dst)
{
    t_stack *temp;
    
    if (!(*src))
        return ;
    else
        temp = (*src);
        *src = (*src)->next;
        *dst = temp;
        (*dst)->next = NULL;
}
