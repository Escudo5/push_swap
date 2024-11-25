/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:09:30 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/25 16:17:24 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pa(t_stack_node **a, t_stack_node **b)
{
   t_stack_node *node;
    if (*b == NULL)
        return ;
    node = *b;
    *b = (*b)->next;
    if (*b)
        (*b)->prev = NULL;
    node->next = *a;
    if (*a)
        (*a)->prev = node;
    *a = node;
    node->prev = NULL;
}