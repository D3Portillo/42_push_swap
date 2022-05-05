/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 04:45:33 by dcerrito          #+#    #+#             */
/*   Updated: 2022/05/02 04:06:32 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	return (
		c == '\t' || c == '\n'
		|| c == '\v' || c == '\f'
		|| c == '\r' || c == ' '
	);
}

int	ft_isnumber(const char *str)
{
	while (is_space(*str))
		++str;
	if (*str == '-' || *str == '+')
		++str;
	while (ft_isdigit(*str))
		str++;
	return (*str == '\0');
}
