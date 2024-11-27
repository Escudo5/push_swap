/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:46:56 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/27 16:54:13 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack_node **a, bool print)
{
	t_stack_node	*second_last;
	t_stack_node	*last;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	last = *a;
	while (last->next != NULL)
		last = last->next;
	second_last->next = NULL;
	second_last = last->prev;
	last->next = *a;
	(*a)->prev = last;
	last->prev = NULL;
	*a = last;
	if (print)
		ft_putstr_fd("pa\n", 1);
}
