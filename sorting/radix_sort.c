/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:51:39 by julian            #+#    #+#             */
/*   Updated: 2021/08/27 18:27:25 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	radix_sort(t_list **stack_a, t_list **stack_b, int stack_size)
{
	t_radix	helper;

	helper.max_iterations = 0;
	while ((stack_size >> helper.max_iterations) != 0)
		helper.max_iterations++;
	helper.i = -1;
	while (++helper.i < helper.max_iterations)
	{
		helper.j = -1;
		helper.k = 0;
		while (++helper.j < stack_size)
		{
			if ((((*stack_a)->content >> helper.i) & 1) == 1)
				ra(stack_a);
			else
			{
				pb(stack_a, stack_b);
				helper.k++;
			}
		}
		helper.l = -1;
		while (++helper.l < helper.k)
			pa(stack_a, stack_b);
	}
}
