/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:22:45 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/25 11:11:22 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	validate_input(int argc, char **argv)
{
	char **input;
	int i;
	i = 0;
	if (argc == 2)
		input = ft_split(argv[1], ' ');
	else
		input = argv + 1;
	while (input[i])
	{
		if (!is_numeric(input[i]) || !is_in_range(input[i]))
		{
			ft_putstr_fd("Error\n", 2);
			if (argc == 2)
				free_array(input);
			return (0);
		}
		i++;
	}
	int *numbers = malloc(sizeof(int) * i);
	if (!numbers)
		return (0);
	int j;
	j = 0;
	while (j < i)
	{
		numbers[j] = ft_atoi(input[j]);
		j++;
	}
	if (is_dup(numbers, i))
	{
		ft_putstr_fd("Error\n", 2);
		free(numbers);
		if (argc == 2)
			free_array(input);
		return (0);
	}
	free(numbers);
	if (argc == 2)
		free_array(input);
	return (1);
}
