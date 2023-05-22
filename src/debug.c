/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:17:06 by rrask             #+#    #+#             */
/*   Updated: 2023/05/22 11:27:19 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_stack **a)
{
	while (*a != NULL)
	{
		ft_printf("%d\n", (*a)->data);
		a = &(*a)->next;
	}
}
