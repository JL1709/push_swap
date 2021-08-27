/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_already_sorted.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jludt <jludt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 12:38:58 by julian            #+#    #+#             */
/*   Updated: 2021/08/27 18:35:28 by jludt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	a_already_sorted(t_list	**stack_a, char **input)
{
	t_list	*tmp;
	int		stack_size;

	stack_size = ft_lstsize(*stack_a);
	tmp = *stack_a;
	while (--stack_size)
	{
		if (tmp->content > tmp->next->content)
			return ;
		tmp = tmp->next;
	}
	free(input);
	free_list(stack_a);
}
