/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 12:11:08 by rrask             #+#    #+#             */
/*   Updated: 2023/05/17 16:26:00 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if (ft_atoi(arg) == -1
		&& ft_strncmp(arg, "-1", ft_strlen(arg)))
		invalid_error("Error");
	if (ft_atoi(arg) == 0
		&& ft_strncmp(arg, "0", ft_strlen(arg)))
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

char	**arg_string_validity(char *arg)
{
	char	**nbrs;

	nbrs = ft_split(arg, ' ');
	handle_multidimensional(nbrs);
	return (0);
}
