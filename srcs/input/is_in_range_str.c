/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_in_range.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escudo5 <escudo5@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:31:54 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/29 12:49:43 by escudo5          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	is_in_range_str(const char *str)
{
	long	num;

	num = ft_atol(str);
	return (num >= INT_MIN && num <= INT_MAX);
}
