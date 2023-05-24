/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:47:32 by rrask             #+#    #+#             */
/*   Updated: 2023/05/24 18:00:08 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void printList(t_stack *node)
{
    t_stack *temp;

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

int	main(int argc, char **argv)
{
	t_stack	*a;
	char	**nbrs;
	int		i;
	int		k;

	a = NULL;
	i = 1;
	k = 0;
	if (argc < ARG_MIN)
		return (0);
	if (argc == ARG_MIN)
	{
		nbrs = arg_string_validity(argv[i]);
		if (!nbrs)
			invalid_error("Error");
	}
	while (argv[i]) //Move this into a separate function
	{
		nbrs = arg_string_validity(argv[i]);
		if (!nbrs)
			invalid_error("Error");
		while (nbrs[k])
		{
			lstadd_back(&a, ft_atoi(nbrs[k]));
			k++;
		}
		freeing_array(nbrs);
		k = 0;
		i++;
	}
	printList(a);
	check_duplicates(&a);
	// sort_it(&a);
	freeing_stack(&a);
	return (0);
}
