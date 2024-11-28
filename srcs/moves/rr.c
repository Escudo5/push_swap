/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:43:21 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/28 12:47:50 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rr(t_stack_node **a, t_stack_node **b, bool print)
{
    ra(a, false);
    rb(b, false);
    if (print)
        ft_putstr_fd("rr\n", 1);
}
