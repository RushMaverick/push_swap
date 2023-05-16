/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 12:11:08 by rrask             #+#    #+#             */
/*   Updated: 2023/05/16 10:33:27 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_alphanum(char **nbrs)
{
	int		o;
	int		i;

	o = 0;
	i = 0;
	while (nbrs[o])
	{
		i = 0;
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
	set_to_stack(nbrs);
	return (0);
}

void	parse_arguments(char *arg)
{
	while (*arg != '\0')
	{
		if (ft_isalpha(*arg))
			invalid_error("Error");
		arg++;
	}
}
