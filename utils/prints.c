/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 00:34:04 by dcerrito          #+#    #+#             */
/*   Updated: 2022/05/13 00:35:54 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils.h"

void	prints(char *content, int size)
{
	write(STDOUT_FILENO, content, size);
	write(STDOUT_FILENO, "\n", 1);
}
