/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmashiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 16:59:22 by lmashiya          #+#    #+#             */
/*   Updated: 2017/06/09 17:28:38 by lmashiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char *s, char c)
{
	int i;
	int word;

	word = 0;
	i = 0;
	if (s)
	{
		while (s[i] == c)
			s++;
		while (s[i])
		{
			if (i == 0 && s[i] != c)
				word++;
			else if (s[i] != c && s[i - 1] == c)
				word++;
			i++;
		}
	}
	return (word);
}
