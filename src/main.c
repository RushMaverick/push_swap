/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:47:32 by rrask             #+#    #+#             */
/*   Updated: 2023/05/12 14:29:11 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	// char	**nbrs;
	// int		x;

	// x = 1;
	if (argc < 2)
		invalid_error("Error");
	if (argc == 2)
		arg_string_validity(argv[1]);
	else
		invalid_error("More than one");
	return (0);
}

/*I need to split the arguments into the linked lists ergo into the stack struct.*/
/*Maybe initialize function to malloc the struct at the start and then go into arg_string_validity?*/
/*If the arguments are more than two, it means we are looking at either "1 3 4 5" 6 2 9 || 1 4 6 2 9*/