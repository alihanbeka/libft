/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchar.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ebeka <ebeka@student.42istanbul.com.tr>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/05 22:57:46 by ebeka            #+#    #+#              */
/*   Updated: 2026/08/11 19:54:46 by ebeka           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i > 0)
	{
		if (s[i] == (char) c)
		{
			return ((char *) & s[i]);
		}
		i--;
	}
	if (s[i] == (char) c)
	{
		return ((char *) & s[i]);
	}
	return (NULL);
}
