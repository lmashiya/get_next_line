/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmashiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 10:30:31 by lmashiya          #+#    #+#             */
/*   Updated: 2017/06/07 10:35:37 by lmashiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(str) + 1;
	dest = (char*)malloc(sizeof(char) * len);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, str);
	return (dest);
}
