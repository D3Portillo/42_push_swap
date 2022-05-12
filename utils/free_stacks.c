/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:34:36 by dcerrito          #+#    #+#             */
/*   Updated: 2022/05/13 00:34:58 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"

void	free_stacks(t_stack stacks[2], char *error)
{
	free(stacks[0].content);
	free(stacks[1].content);
	if (error)
	{
		write(STDERR_FILENO, error, ft_strlen(error));
		write(STDERR_FILENO, "\n", 1);
		exit(EXIT_FAILURE);
	}
}
