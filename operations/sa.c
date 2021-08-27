/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:53:43 by julian            #+#    #+#             */
/*   Updated: 2021/08/27 11:34:40 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **stack_a)
{
	int	temp;
	int	len;

	len = ft_lstsize(*stack_a);
	if (len > 1)
	{
		temp = (*stack_a)->content;
		(*stack_a)->content = (*stack_a)->next->content;
		(*stack_a)->next->content = temp;
	}
	write(1, "sa\n", 3);
}
