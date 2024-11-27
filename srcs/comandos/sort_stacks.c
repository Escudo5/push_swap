/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:45:07 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/27 17:03:52 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int	len_a;

	len_a = get_len(*a);
	while (len_a > 3)
	{
		pb(b, a, true);
		len_a--;
	}
	sort_three(a);
	while (*b != NULL)
		pa(a, b, true);
}
