/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:16:25 by rrask             #+#    #+#             */
/*   Updated: 2023/05/25 15:47:37 by rrask            ###   ########.fr       */
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

void	sa(t_stack **a)
{
	t_stack	*temp;

	temp = (*a)->next;

	(*a)->next = (*a)->next->next;
	temp->next = (*a);
	*a = temp;
}

void	sb(t_stack **b)
{
	t_stack	*temp;

	temp = (*b)->next;

	(*b)->next = (*b)->next->next;
	temp->next = (*b);
	*b = temp;
}

void	ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
}

// void	pa(t_stack **a, t_stack **b)
// {
// 	void	((*a));
// 	void	((*b));
//  //Logic here
// }

// void	pb(t_stack **a, t_stack **b)
// {
// 	void	((*a));
// 	void	((*b));
//  //Logic here
// }
