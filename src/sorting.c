/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:54:14 by rrask             #+#    #+#             */
/*   Updated: 2023/05/24 10:32:01 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_it(t_stack **a)
{
	if ((*a)->amount == 2)
	{
		ft_printf("2 arguments");
	}
	if ((*a)->amount == 3)
	{
		ft_printf("3 arguments");
	}
	if ((*a)->amount > 3)
	{
		ft_printf("Might be good to use radix here.");
	}
}
