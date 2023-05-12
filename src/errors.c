/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:31:34 by rrask             #+#    #+#             */
/*   Updated: 2023/05/12 14:31:14 by rrask            ###   ########.fr       */
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
	int		o;
	int		i;

	o = 0;
	i = 0;
	nbrs = ft_split(arg, ' ');
	while (nbrs[o])
	{
		i = 0;
		ft_printf("%s\n", nbrs[o]);
		while (nbrs[o][i] != '\0')
		{
			ft_printf("%c\n", nbrs[o][i]);
			i++;
		}
		o++;
	}
	return (0);
}
