/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:47:32 by rrask             #+#    #+#             */
/*   Updated: 2023/05/19 15:18:37 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	int		i;

	a = NULL;
	i = 1;
	if (argc < 2)
		return (0);
	while (argv[i])
	{
		if (arg_string_validity(argv[i]))
		{
			lstadd_back(&a, ft_atoi(argv[i]));
			// ft_printf("%d\n", a->next->data);
		}
		else
			invalid_error("Error");
		i++;
	}
	while (a->next != NULL)
	{
		ft_printf("%d\n", a->data);
		a = a->next;
	}
	return (0);
}
