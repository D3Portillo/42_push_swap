/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:34:36 by dcerrito          #+#    #+#             */
/*   Updated: 2022/05/13 00:34:46 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"

int	is_sorted(t_stack stack)
{
	int	i;

	i = 0;
	while (++i < stack.size)
		if (stack.content[i - 1] > stack.content[i])
			return (0);
	return (1);
}
