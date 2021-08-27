/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:45:55 by julian            #+#    #+#             */
/*   Updated: 2021/08/22 15:21:11 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **stack_a)
{
	t_list	*sec_last;
	t_list	*last;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		sec_last = NULL;
		last = *stack_a;
		while (last->next != NULL)
		{
			sec_last = last;
			last = last->next;
		}
		sec_last->next = NULL;
		last->next = *stack_a;
		*stack_a = last;
	}
	write(1, "rra\n", 4);
}
