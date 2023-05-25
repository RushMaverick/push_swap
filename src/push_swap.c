/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:47:32 by rrask             #+#    #+#             */
/*   Updated: 2023/05/25 11:16:03 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_list(t_stack *node)
{
	t_stack	*temp;

	temp = node;
	while (node != NULL)
	{
		ft_printf("%d -> ", node->data);
		node = node->next;
	}
	ft_printf("NULL \n\n");
	// while (temp != NULL)
	// {
	//     printf("%d -> ", temp->index);
	//     temp = temp->next;
	// }
	// printf("NULL \n");
}

static void	handle_args(t_stack **a, char **arg)
{
	char	**nbrs;
	int		i;
	int		n;

	i = 1;
	n = 0;
	while (arg[i])
	{
		nbrs = arg_string_validity(arg[i]);
		if (!nbrs)
			invalid_error("Error");
		while (nbrs[n])
		{
			lstadd_back(a, ft_atoi(nbrs[n]));
			n++;
		}
		freeing_array(nbrs);
		n = 0;
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	int		i;

	a = NULL;
	i = 1;
	if (argc < ARG_MIN)
		return (0);
	handle_args(&a, argv);
	check_duplicates(&a);
	print_list(a);
	// sort_it(&a);
	freeing_stack(&a);
	return (0);
}
