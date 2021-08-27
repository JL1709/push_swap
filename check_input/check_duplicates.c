/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicates.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:55:34 by julian            #+#    #+#             */
/*   Updated: 2021/08/27 12:03:15 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_duplicates(int stack_size, int *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack_size)
	{
		j = i + 1;
		while (j < stack_size)
		{
			if (stack[i] == stack[j])
				print_error();
			j++;
		}
		i++;
	}
}
