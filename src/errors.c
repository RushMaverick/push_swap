/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:31:34 by rrask             #+#    #+#             */
/*   Updated: 2023/05/14 11:17:21 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	invalid_error(char *err_msg)
{
	ft_putendl_fd(err_msg, 2);
	exit(0);
}

char	**arg_string_validity(char *arg)
{
	char	**nbrs;

	nbrs = ft_split(arg, ' ');
	check_alphanum(nbrs);
	set_to_stack(nbrs);
	return (0);
}

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
