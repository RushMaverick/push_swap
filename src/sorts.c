/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:30:09 by rrask             #+#    #+#             */
/*   Updated: 2023/05/31 09:02:22 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mini_sort(t_stack **head_a, t_stack **head_b)
{
	push(head_a, head_b);
	ft_putstr_fd("pa\n", 1);
	swap(head_a);
	ft_putstr_fd("sa\n", 1);
	push(head_b, head_a);
	ft_putstr_fd("pb\n", 1);
}
