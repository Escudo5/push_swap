/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:44:36 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/26 16:20:28 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./custom-libft/libft.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					push_cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}						t_stack_node;

void					init_stack_a(t_stack_node **a, char **argv);
static long				ft_atol(const char *nptr);
int						validate_input(int argc, char **argv);
bool					is_numeric(const char *str);
bool					is_dup(int *numbers, int len);
bool					is_in_range(const char *str);
void					free_array(char **array);
void					sa(t_stack_node **a);
void					sb(t_stack_node **b);
void					pa(t_stack_node **a, t_stack_node **b);
void					pb(t_stack_node **a, t_stack_node **b);
void					ss(t_stack_node **a, t_stack_node **b);
void					ra(t_stack_node **a);
void					rb(t_stack_node **b);
void					rr(t_stack_node **a, t_stack_node **b);
void					rra(t_stack_node **a);
void					rrb(t_stack_node **b);
void					rrr(t_stack_node **a, t_stack_node **b);
void					index(t_stack_node **a);
bool					unindexed(t_stack_node *a);
t_stack_node			*find_smallest_unindexed(t_stack_node *a);
int	find_largest_index(t_stack_node *b);
void	move_largest_to_top(t_stack_node **b, int largest_index);
void	push_to_a(t_stack_node **a, t_stack_node **b);


#endif
