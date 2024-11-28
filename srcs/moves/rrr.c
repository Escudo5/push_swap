/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:18:52 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/28 12:48:06 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_stack_node **a, t_stack_node **b, bool print)
{
	rra(a, false);
	rrb(b, false);
	if (print)
		ft_putstr_fd("rrr\n", 1);
}
