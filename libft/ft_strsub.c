/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmashiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/08 04:55:59 by lmashiya          #+#    #+#             */
/*   Updated: 2017/06/08 05:28:40 by lmashiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	count;

	if (!s)
		return (NULL);
	count = 0;
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	while (count < len)
	{
		str[count] = s[start + count];
		count++;
	}
	return (str);
}
