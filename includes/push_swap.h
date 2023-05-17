/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:52:36 by rrask             #+#    #+#             */
/*   Updated: 2023/05/17 17:10:43 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}					t_stack;

void				invalid_error(char *err_msg);
char				**arg_string_validity(char *arg);
void				handle_multidimensional(char **nbrs);
void				parse_arguments(char *arg);
t_stack				*set_to_stack(char *nbr);
t_stack				*node_create(int nbr);
#endif