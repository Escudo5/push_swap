/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:16:03 by smarquez          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/12/09 18:11:20 by smarquez         ###   ########.fr       */
=======
/*   Updated: 2024/11/29 12:44:30 by escudo5          ###   ########.fr       */
>>>>>>> d154dc834a0d0d6a3629d7e7a1f8e114c4a85f17
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	is_in_range(int index, int start, int end)
{
	return (index >= start && index <= end);
}

bool	has_elements_in_range(t_stack_node *a, int start, int end)
{
	while (a)
	{
		if (is_in_range(a->index, start, end))
			return (true);
		a = a->next;
	}
	return (false);
}

void	push_range_to_b(t_stack_node **a, t_stack_node **b, int start, int end)
{
	if (*a == NULL)
		return ;
	while (has_elements_in_range(*a, start, end))
	{
		if (is_in_range((*a)->index, start, end))
			pb(a, b, true);
		else
			ra(a, true);
	}
}

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int	total_numbers;
	int	block_size;
	int	start;
	int	end;

	total_numbers = ft_stacksize(*a);
	block_size = total_numbers / 5;
	start = 0;
	end = block_size - 1;
	while (start < total_numbers)
	{
		push_range_to_b(a, b, start, end);
		start += block_size;
		end += block_size;
		if (end >= total_numbers)
			end = total_numbers - 1;
	}
	push_to_a(a, b);
}
