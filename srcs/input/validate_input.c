/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:22:45 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/29 12:49:59 by escudo5          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**split_input(int argc, char **argv, int *len)
{
	char	**input;

	if (argc == 2)
		input = ft_split(argv[1], ' ');
	else
		input = argv + 1;
	*len = 0;
	while (input[*len])
		(*len)++;
	return (input);
}

bool	is_valid(char *str)
{
	return (is_numeric(str) && is_in_range_str(str));
}

bool	has_dup(int *numbers, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (numbers[i] == numbers[j])
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

int	*create_number_array(char **input, int len)
{
	int	*numbers;
	int	i;

	numbers = malloc(sizeof(int) * len);
	if (!numbers)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (!is_valid(input[i]))
		{
			free(numbers);
			return (NULL);
		}
		numbers[i] = ft_atoi(input[i]);
		i++;
	}
	return (numbers);
}

bool	check_dup(char **input, int len)
{
	int	*numbers;

	numbers = create_number_array(input, len);
	if (!numbers)
		return (true);
	if (has_dup(numbers, len))
	{
		free(numbers);
		return (true);
	}
	free(numbers);
	return (false);
}
