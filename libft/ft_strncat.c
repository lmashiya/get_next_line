/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmashiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 13:57:43 by lmashiya          #+#    #+#             */
/*   Updated: 2017/06/07 06:59:18 by lmashiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[j] != '\0')
	{
		j++;
	}
	while (s2[i] != '\0' && n != 0)
	{
		s1[j + i] = s2[i];
		i++;
		n--;
	}
	s1[j + i] = '\0';
	return (s1);
}