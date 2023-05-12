/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:52:36 by rrask             #+#    #+#             */
/*   Updated: 2023/05/12 14:12:50 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"

typedef struct s_arr_node
{
	int					value;
	int					rank;
	struct s_arr_node	*next;
}						t_arr_node;

typedef struct s_stack
{
	t_arr_node			*head;
	int					size;
}						t_stack;

void					invalid_error(char *err_msg);
char					**arg_string_validity(char *arg);
#endif