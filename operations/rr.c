/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:39:40 by julian            #+#    #+#             */
/*   Updated: 2021/08/27 11:33:43 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_list **stack_a, t_list **stack_b)
{
	t_list	*first;
	t_list	*last;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		first = *stack_a;
		last = *stack_a;
		while (last->next != NULL)
			last = last->next;
		*stack_a = first->next;
		first->next = NULL;
		last->next = first;
	}
	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		first = *stack_b;
		last = *stack_b;
		while (last->next != NULL)
			last = last->next;
		*stack_b = first->next;
		first->next = NULL;
		last->next = first;
	}
	write(1, "rr\n", 3);
}
