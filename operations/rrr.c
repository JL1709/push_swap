/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:56:10 by julian            #+#    #+#             */
/*   Updated: 2021/08/22 15:21:20 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rrb_local(t_list **stack_b)
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
}

static void	rra_local(t_list **stack_a)
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
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra_local(stack_a);
	rrb_local(stack_b);
	write(1, "rrr\n", 4);
}
