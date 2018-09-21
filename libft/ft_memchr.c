/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmashiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 11:04:17 by lmashiya          #+#    #+#             */
/*   Updated: 2017/06/08 09:05:42 by lmashiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cast;

	s_cast = (unsigned char*)s;
	while (n > 0)
	{
		if (*s_cast != (unsigned char)c)
			s_cast++;
		else
			return (s_cast);
		n--;
	}
	return (NULL);
}
