/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 12:11:08 by rrask             #+#    #+#             */
/*   Updated: 2023/05/19 15:21:50 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_arguments(char *arg)
{
	int	i;
	int	num;

	i = 0;
	while (arg[i] != '\0')
	{
		if (!ft_isdigit(arg[i]) && arg[i] != ' ')
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
}

void	handle_multidimensional(char **nbrs)
{
	int	o;

	o = 0;
	while (nbrs[o])
	{
		parse_arguments(nbrs[o]);
		o++;
	}
}

int	arg_string_validity(char *arg)
{
	char	**nbrs;

	nbrs = ft_split(arg, ' ');
	handle_multidimensional(nbrs);
	return (1);
}
