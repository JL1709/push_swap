/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julian <julian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 20:55:03 by julian            #+#    #+#             */
/*   Updated: 2021/08/30 11:35:26 by julian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_digits(int stack_size, char **input)
{
	int	i;
	int	j;

	i = -1;
	while (++i < stack_size)
	{
		if (input[i][0] == '-')
			j = 1;
		else
			j = 0;
		if (input[i][0] == '-' && ft_isdigit(input[i][1]) != 1)
			print_error(input);
		while (input[i][j] != '\0')
		{
			if (ft_isdigit(input[i][j]) != 1)
				print_error(input);
			j++;
		}
	}
}
