/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:44:36 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/18 18:07:31 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdbool.h>

#include <limits.h>
#include "../libft/libft_tuneada/custom-libft/libft.h"
#include "/../ft_printf/ft_printf/ft_printf.h"

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
    t_stack_node;
}


#endif

