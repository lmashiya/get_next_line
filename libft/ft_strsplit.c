/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmashiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 14:44:44 by lmashiya          #+#    #+#             */
/*   Updated: 2017/06/09 17:28:00 by lmashiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**tab;
	int		nb_words;
	int		word_len;

	i = 0;
	nb_words = ft_wordcount((char *)s, c);
	if ((tab = (char **)malloc(nb_words * sizeof(char *) + 1)))
	{
		word_len = 0;
		while (i < nb_words)
		{
			while (*s == c)
				s++;
			while (*s != c && *s)
			{
				word_len++;
				s++;
			}
			tab[i++] = ft_strsub(s - word_len, 0, word_len);
			word_len = 0;
		}
		tab[i] = NULL;
	}
	return (tab);
}
