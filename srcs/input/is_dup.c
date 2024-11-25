/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:37:30 by smarquez          #+#    #+#             */
/*   Updated: 2024/11/25 10:40:28 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool is_dup(int *numbers, int len)
{
    int i;
    int j;
    
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
