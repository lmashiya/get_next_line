/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmashiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 14:40:01 by lmashiya          #+#    #+#             */
/*   Updated: 2017/06/08 09:27:35 by lmashiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ds1;
	unsigned char	*ds2;

	i = 0;
	ds1 = (unsigned char*)s1;
	ds2 = (unsigned char*)s2;
	while (ds1[i] != '\0' && ds2[i] != '\0' && i < n)
	{
		if (ds1[i] != ds2[i])
			return (ds1[i] - ds2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (ds1[i] - ds2[i]);
}
