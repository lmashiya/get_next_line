/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmashiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 14:58:32 by lmashiya          #+#    #+#             */
/*   Updated: 2017/06/09 15:08:09 by lmashiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	revstr;

	i = 0;
	length = ft_strlen(str);
	while (length - 1 > i)
	{
		revstr = str[i];
		str[i] = str[length - 1];
		str[length - 1] = revstr;
		length--;
		i++;
	}
	return (str);
}
