/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:44:36 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/25 11:02:51 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdbool.h>

#include <limits.h>
#include "./custom-libft/libft.h"


typedef struct s_stack_node
{
    int     nbr;
    int     index;
    int     push_cost;
    bool    above_median;
    bool    cheapest;
    struct s_stack_node *target_node;
    struct s_stack_node *next;
    struct s_stack_node *prev;
}t_stack_node;



void    init_stack_a(t_stack_node **a, char **argv);
static long	ft_atol(const char *nptr);
int validate_input(int argc, char **argv);
bool is_numeric(const char *str);
bool is_dup(int *numbers, int len);
bool is_in_range(const char *str);
void    free_array(char **array);





#endif

