/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 12:11:08 by rrask             #+#    #+#             */
/*   Updated: 2023/05/23 12:05:24 by rrask            ###   ########.fr       */
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
				invalid_error("DUpE found");
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
	while (arg[i] != '\0')
	{
		if (!ft_isdigit_neg(arg[i]) && arg[i] != ' ')
			invalid_error("Error");
		i++;
	}
	num = ft_atoi(arg);
	if (num == -1
		&& ft_strncmp(arg, "-1", 2))
		invalid_error("Error");
	if (num == 0
		&& ft_strncmp(arg, "0", 1))
		invalid_error("Error");
	return (0);
}

int	handle_multidimensional(char **nbrs)
{
	int	i;

	i = 0;
	while (nbrs[i])
	{
		parse_arguments(nbrs[i]);
		i++;
	}
	return (1);
}

char	**arg_string_validity(char *arg)
{
	char	**nbrs;

	nbrs = ft_split(arg, ' ');
	if (handle_multidimensional(nbrs))
		return (nbrs);
	return (NULL);
}
