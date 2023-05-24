/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 11:05:56 by rrask             #+#    #+#             */
/*   Updated: 2023/05/24 18:00:28 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	freeing_array(char **nbrs)
{
	int		i;
	int		o;

	i = 0;
	o = 0;
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
	while (temp)
	{
		temp = temp->next;
		free(temp);
	}
	free(temp);
}
