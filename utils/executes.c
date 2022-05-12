/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:34:36 by dcerrito          #+#    #+#             */
/*   Updated: 2022/05/13 00:58:18 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"

static void	swap(char *swapping, t_stack *stack)
{
	int	temp;

	if (stack->size > 1)
	{
		prints(swapping, 2);
		temp = stack->content[0];
		stack->content[0] = stack->content[1];
		stack->content[1] = temp;
	}
}

static void	revreverse(char *reverting, t_stack *stack)
{
	int	i;
	int	temp;

	if (stack->size > 1)
	{
		prints(reverting, 3);
		i = stack->size;
		temp = stack->content[i - 1];
		while (--i > 0)
			stack->content[i - 1] = stack->content[i];
		stack->content[0] = temp;
	}
}

static void	reverse(char *reverting, t_stack *stack)
{
	int	i;
	int	last_idx;
	int	temp;

	last_idx = stack->size - 1;
	if (last_idx > 0)
	{
		prints(reverting, 2);
		i = 0;
		temp = stack->content[i];
		while (++i <= last_idx)
				stack->content[i - 1] = stack->content[i];
		stack->content[last_idx] = temp;
	}
}

void	executes(char *action, t_stack stacks[2])
{
	if (!ft_strcmp(action, SA))
		swap(SA, &stacks[0]);
	else if (!ft_strcmp(action, SB))
		write(1, "2", 1);
	else if (!ft_strcmp(action, PA))
		write(1, "2", 1);
	else if (!ft_strcmp(action, PB))
		write(1, "2", 1);
	else if (!ft_strcmp(action, RA))
		reverse(RA, &stacks[0]);
	else if (!ft_strcmp(action, RR))
		write(1, "2", 1);
	else if (!ft_strcmp(action, RRA))
		revreverse(RRA, &stacks[0]);
	else if (!ft_strcmp(action, RRB))
		write(1, "2", 1);
}
