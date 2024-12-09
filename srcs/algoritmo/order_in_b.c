/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_in_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:57:41 by smarquez          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/12/09 17:37:45 by smarquez         ###   ########.fr       */
=======
/*   Updated: 2024/11/29 12:42:51 by escudo5          ###   ########.fr       */
>>>>>>> d154dc834a0d0d6a3629d7e7a1f8e114c4a85f17
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_largest_index(t_stack_node *b)
{
	int	largest_index;

	largest_index = b->index;
	while (b)
	{
		if (b->index > largest_index)
			largest_index = b->index;
		b = b->next;
	}
	return (largest_index);
}

void	move_largest_to_top(t_stack_node **b, int largest_index)
{
	int				position;
	int				len;
	t_stack_node	*temp;

	position = 0;
	len = ft_stacksize(*b);
	temp = *b;
	while (temp && temp->index != largest_index)
	{
		temp = temp->next;
		position++;
	}
	if (position <= len / 2)
		while ((*b)->index != largest_index)
			rb(b, true);
	else
		while ((*b)->index != largest_index)
			rrb(b, true);
}

void	push_to_a(t_stack_node **a, t_stack_node **b)
{
	int largest_index;

	while (*b)
	{
		largest_index = find_largest_index(*b);
		move_largest_to_top(b, largest_index);
		pa(b, a, true);
	}
}