/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:11:23 by julian            #+#    #+#             */
/*   Updated: 2021/08/22 15:20:01 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **stack_a)
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
	write(1, "ra\n", 3);
}
