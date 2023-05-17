/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 11:05:56 by rrask             #+#    #+#             */
/*   Updated: 2023/05/17 17:11:52 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*set_to_stack(char *nbr)
{
	t_stack	*node;

	node = node_create(ft_atoi(nbr));
	node->next = NULL;
	return (node);
}
