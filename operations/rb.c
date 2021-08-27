/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:36:05 by julian            #+#    #+#             */
/*   Updated: 2021/08/22 15:20:04 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_list **stack_b)
{
	t_list	*first;
	t_list	*last;

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
	write(1, "rb\n", 3);
}
