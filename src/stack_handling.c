/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 11:05:56 by rrask             #+#    #+#             */
/*   Updated: 2023/05/25 09:49:57 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freeing_array(char **nbrs)
{
	int		i;

	i = 0;
	while (nbrs[i] != NULL)
	{
		free(nbrs[i]);
		i++;
	}
	free(nbrs);
}

void	freeing_stack(t_stack **a)
{
	t_stack	*temp;

	temp = *a;
	while (temp != NULL)
	{
		*a = (*a)->next;
		free(temp);
		temp = *a;
	}
}
