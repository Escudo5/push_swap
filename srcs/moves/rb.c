/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:34:18 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/25 19:36:03 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_stack_node **b)
{
	t_stack_node *first;
	t_stack_node *last;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	first = *b;
	*b = (*b)->next;
	(*b)->prev = NULL;
	last = *b;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->prev = last;
	first->next = NULL;
}
