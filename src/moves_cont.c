/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_cont.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:28:06 by rrask             #+#    #+#             */
/*   Updated: 2023/05/31 17:14:06 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <push_swap.h>

void    rotate(t_stack **head, char *str) //The first element becomes the last one.
{
    t_stack    *node;
    t_stack    *temp;

    if (*head == NULL)
        return ;
	node = *head;
	*head = node->next;
	temp = last_node(*head);
	temp->next = node;
	node->next = NULL;
	ft_putstr_fd(str, 1);
}

void	rev_rotate(t_stack **head, char *str) //The last element becomes the first one.
{
	t_stack	*node;
	t_stack	*temp;

    if (*head == NULL)
        return ;
	node = last_node(*head);
	temp = next_to_last_node(*head);
	node->next = *head;
	*head = node;
	temp->next = NULL;
	ft_putstr_fd(str, 1);
}

void	rot_both(t_stack **a_stack, t_stack **b_stack)
{
	rotate(a_stack, "ra");
	rotate(b_stack, "rb");
}
