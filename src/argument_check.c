/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 12:11:08 by rrask             #+#    #+#             */
/*   Updated: 2023/05/16 14:42:54 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_alphanum(char **nbrs)
{
	int	o;
	int	i;

	o = 0;
	i = 0;
	while (nbrs[o])
	{
		i = 0;
		int_min_max_handler(nbrs[o]);
		while (nbrs[o][i] != '\0')
		{
			if (ft_isalpha(nbrs[o][i]))
				invalid_error("Error");
			i++;
		}
		o++;
	}
}

char	**arg_string_validity(char *arg)
{
	char	**nbrs;

	nbrs = ft_split(arg, ' ');
	check_alphanum(nbrs);
	return (0);
}

void	parse_arguments(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (ft_isalpha(arg[i]))
			invalid_error("Error");
		i++;
	}
}

void	int_min_max_handler(char *nbr)
{
	if (ft_atoi(nbr) == -1
		&& ft_strncmp(nbr, "-1", ft_strlen(nbr)))
		invalid_error("Error");
	if (ft_atoi(nbr) == 0
		&& ft_strncmp(nbr, "0", ft_strlen(nbr)))
		invalid_error("Error");
}
