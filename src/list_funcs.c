/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:36:17 by rrask             #+#    #+#             */
/*   Updated: 2023/05/17 17:05:15 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*node_create(int nbr)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	new_node->data = nbr;
	new_node->next = NULL;
	return (new_node);
}
