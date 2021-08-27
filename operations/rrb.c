/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:55:05 by julian            #+#    #+#             */
/*   Updated: 2021/08/22 15:21:16 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_list **stack_b)
{
	t_list	*sec_last;
	t_list	*last;

	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		sec_last = NULL;
		last = *stack_b;
		while (last->next != NULL)
		{
			sec_last = last;
			last = last->next;
		}
		sec_last->next = NULL;
		last->next = *stack_b;
		*stack_b = last;
	}
	write(1, "rrb\n", 4);
}
