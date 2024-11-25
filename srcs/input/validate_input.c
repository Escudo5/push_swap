/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:22:45 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/25 14:57:55 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**split_input(int argc, char **argv)
{
	if (argc == 2)
		return (ft_split(argv[1], ' '));
	return (argv + 1);
}

bool	is_valid(char *str)
{
	return (is_numeric(str) && is_in_range(str));
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

bool	check_dup(char **input)
{
	int	*numbers;
	int	len;

	len = 0;
	while (input[len])
		len++;
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
		numbers[i] = ft_atoi(input[i]);
		i++;
	}
	return (numbers);
}