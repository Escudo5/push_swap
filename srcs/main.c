/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:44:15 by smarquez          #+#    #+#             */
/*   Updated: 2024/12/19 16:18:33 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char			**input;
	int				*numbers;
	int				len;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (1);
	input = split_input(argc, argv, &len);
	if (check_dup(input, len))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	len = 0;
	while (input[len])
		len++;
	numbers = create_number_array(input, len);
	init_stack_a(&a, numbers, len);
	if (!stack_sorted(a))
	{
		if (get_len(&a) == 2)
			sa(&a, false);
		else if (get_len(&a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);
	}
	free_stack(&a);
	return (0);
}
