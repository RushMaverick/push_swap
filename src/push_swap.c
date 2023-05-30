/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:47:32 by rrask             #+#    #+#             */
/*   Updated: 2023/05/30 14:53:37 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_list(t_stack *node)
{
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
		nbrs = NULL;
		if (!nbrs)
			invalid_error("Error");
		n = 0;
		while (nbrs[n])
		{
			lstadd_back(&(*a), ft_atoi(nbrs[n]));
			n++;
		}
		freeing_array(nbrs);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < ARG_MIN)
		return (0);
	handle_args(&a, argv);
	check_duplicates(a);
	print_list(a);
	print_list(b);
	sort_it(&a, &b);
	print_list(a);
	print_list(b);
	freeing_stack(&a);
	freeing_stack(&b);
	return (0);
}
