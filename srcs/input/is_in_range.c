/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_in_range.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:31:54 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/25 10:34:15 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool is_in_range(const char *str)
{
    long num;
    num = ft_atol(str);
    
    return (num >= INT_MIN && num <= INT_MAX);
}