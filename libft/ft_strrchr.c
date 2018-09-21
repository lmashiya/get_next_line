/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmashiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 10:06:28 by lmashiya          #+#    #+#             */
/*   Updated: 2017/06/06 10:36:23 by lmashiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i != 0 && s[i] != (unsigned char)c)
	{
		i--;
	}
	if (s[i] == (unsigned char)c)
		return ((char*)s + i);
	return (NULL);
}
