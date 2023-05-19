/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:52:36 by rrask             #+#    #+#             */
/*   Updated: 2023/05/19 15:20:23 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}					t_stack;

void				invalid_error(char *err_msg);
int					arg_string_validity(char *arg);
void				handle_multidimensional(char **nbrs);
void				parse_arguments(char *arg);
// void				set_to_stack(t_stack **stack, int nbr);
t_stack				*node_create(int nbr);
void				lstadd_back(t_stack **stack, int nbr);
#endif