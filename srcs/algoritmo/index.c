/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:35:26 by smarquez          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/12/09 17:37:21 by smarquez         ###   ########.fr       */
=======
/*   Updated: 2024/11/29 12:35:20 by escudo5          ###   ########.fr       */
>>>>>>> d154dc834a0d0d6a3629d7e7a1f8e114c4a85f17
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	unindexed(t_stack_node *a)
{
	while (a)
	{
		if (a->index == -1)
			return (true);
		a = a->next;
	}
	return (false);
}

t_stack_node	*find_smallest_unindexed(t_stack_node *a)
{
	t_stack_node	*smallest_node;

	smallest_node = NULL;
	while (a)
	{
		if (a->index == -1 && (!smallest_node || a->nbr < smallest_node->nbr))
			smallest_node = a;
		a = a->next;
	}
	return (smallest_node);
}

void	index_n(t_stack_node **a)
{
	t_stack_node	*smallest_node;
	int				current_index;

	current_index = 0;
	while (unindexed(*a))
	{
		smallest_node = find_smallest_unindexed(*a);
		smallest_node->index = current_index;
		current_index++;
	}
}