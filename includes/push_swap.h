/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:52:36 by rrask             #+#    #+#             */
/*   Updated: 2023/05/23 17:34:44 by rrask            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define ARG_MIN 2
# include "libft.h"

typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}					t_stack;

void				invalid_error(char *err_msg);
char				**arg_string_validity(char *arg);
int					handle_multidimensional(char **nbrs);
int					parse_arguments(char *arg);
t_stack				*node_create(int nbr);
void				lstadd_back(t_stack **stack, int nbr);
void				check_duplicates(t_stack **a);
void				freeing_array(char **nbrs);
void				freeing_stack(t_stack **a);
void				print_list(t_stack **a); //DEBUG!!!
#endif