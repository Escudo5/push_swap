/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:35:38 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/19 15:38:14 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"









bool    stack_sorted(t_stack_node *stack)
{
    if (!stack)
        return(1);
    while (stack->next)
    {
        if (stack->nbr > stack->next->nbr)
            return(false);
        stack = stack->next;
    }
    return(true);
}