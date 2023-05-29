/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrask <rrask@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:52:36 by rrask             #+#    #+#             */
/*   Updated: 2023/05/29 12:23:03 by rrask            ###   ########.fr       */
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
	int				amount;
	struct s_stack	*next;
}					t_stack;

void				invalid_error(char *err_msg);
char				**arg_string_validity(char *arg);
int					handle_multidimensional(char **nbrs);
int					parse_arguments(char *arg);
t_stack				*node_create(int nbr);
void				lstadd_back(t_stack **stack, int nbr);
void				check_duplicates(t_stack *a);
void				freeing_array(char **nbrs);
void				freeing_stack(t_stack **a);
t_stack				**sort_it(t_stack **a, t_stack **b);
void				mini_sort(t_stack **head);
void				swap(t_stack **head);
void				ss(t_stack *a, t_stack *b);
void				rotate(t_stack **head);
void				rev_rotate(t_stack **head);
t_stack				*last_node(t_stack *head);
t_stack 			*next_to_last_node(t_stack *head);
#endif