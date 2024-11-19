/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:45:07 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/19 15:48:39 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

void    sort_stacks(t_stack_node **a, t_stack_node **b)
{
    int len_a;
    
    len_a = stack_len(*a);
    if (len_a-- > 3 && !stack_sorted(*a))
        pb(b, a, false);
    if (len_a-- > 3 && !stack_sorted(*a))
        pb(b, a, false);
    while (len_a-- > 3 && !stack_sorted(*a))
    {
        init_nodes_a(*a, *b);
        move_a_to_b(a, b);
    }
}