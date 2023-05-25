/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 12:11:08 by rrask             #+#    #+#             */
/*   Updated: 2023/05/25 11:12:45 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_duplicates(t_stack **a)
{
	int		i;
	int		o;
	t_stack	*curr;

	i = 0;
	o = 0;
	curr = *a;
	while (curr->next != NULL)
	{
		while ((*a)->next != NULL)
		{
			if (curr->data == (*a)->next->data)
				invalid_error("Error");
			a = &(*a)->next;
		}
		curr = curr->next;
		a = &curr;
	}
}

int	parse_arguments(char *arg)
{
	int	i;
	int	num;

	i = 0;
	if (arg[0] == '-')
		i = 1;
	while (arg[i] != '\0')
	{
		if ((!ft_isdigit(arg[i]) && arg[i] != ' '))
			return (1);
		i++;
	}
	num = ft_atoi(arg);
	if (num >= 0 && arg[0] == '-')
		return (1);
	if (num < 0 && arg[0] != '-')
		return (1);
	return (0);
}

int	handle_multidimensional(char **nbrs)
{
	int	i;

	i = 0;
	while (nbrs[i])
	{
		if (parse_arguments(nbrs[i]) == 1)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	**arg_string_validity(char *arg)
{
	char	**nbrs;

	nbrs = ft_split(arg, ' ');
	if (!nbrs[0])
	{
		freeing_array(nbrs);
		return (0);
	}
	if (handle_multidimensional(nbrs) == 0)
		return (nbrs);
	freeing_array(nbrs);
	return (0);
}
