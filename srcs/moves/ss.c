/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:26:55 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/27 16:51:05 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack_node **a, t_stack_node **b, bool print)
{
	sa(a, false);
	sb(b, false);
	if (print)
		ft_putstr_fd("ss\n", 1);
}
