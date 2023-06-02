/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:17:06 by rrask             #+#    #+#             */
/*   Updated: 2023/06/02 13:38:27 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack *node)
{
	while (node != NULL)
	{
		ft_printf("%d -> ", node->index);
		node = node->next;
	}
	ft_printf("NULL \n\n");
}
