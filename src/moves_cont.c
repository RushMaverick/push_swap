/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_cont.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:28:06 by rrask             #+#    #+#             */
/*   Updated: 2023/05/30 10:31:46 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <push_swap.h>

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

void	rot_both(t_stack **a_stack, t_stack **b_stack)
{
	rotate(a_stack);
	rotate(b_stack);
}
