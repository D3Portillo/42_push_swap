/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:34:36 by dcerrito          #+#    #+#             */
/*   Updated: 2022/05/13 00:34:37 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"

void	print_stack(t_stack stack)
{
	int	i;

	i = 0;
	while (i < stack.size)
		printf("%d\n", stack.content[i++]);
}
