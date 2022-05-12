/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 03:08:54 by dcerrito          #+#    #+#             */
/*   Updated: 2022/05/13 00:54:58 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "../includes/core.h"

char	**ft_split(char const *str, char delimiter);
void	ft_strcpy(char *dest, char *src, int limit);
char	*ft_strdup(char *source);
char	*ft_strjoin(char *s1, char *s2);
void	ft_strlcat(char *dest, const char *src, size_t n);
void	ft_strlcpy(char *dest, char *src, int n);
int		ft_strlen(char *str);
int		ft_arrlen(void *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_substr(char const *src, unsigned int start, size_t size);
int		ft_isnumber(const char *str);
int		ft_isdigit(int c);
int		ft_atoi(const char *str, int *status);
int		ft_strcmp(char *s1, char *s2);

#endif