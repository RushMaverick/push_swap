/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:16:25 by rrask             #+#    #+#             */
/*   Updated: 2023/05/30 17:12:21 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
