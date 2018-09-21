/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmashiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 14:06:40 by lmashiya          #+#    #+#             */
/*   Updated: 2017/06/10 13:18:39 by lmashiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char			*ft_nbrstr(int n, char *str, unsigned int pos)
{
	unsigned int	nb;

	pos--;
	if (n < 0)
	{
		nb = -n;
		str[0] = '-';
	}
	else
		nb = n;
	if (nb >= 10)
	{
		ft_nbrstr((nb / 10), str, pos);
		str[pos] = ((nb % 10) + '0');
	}
	else
		str[pos] = (nb + '0');
	return (str);
}

static unsigned int	ft_lennbr(int n)
{
	unsigned int	count;
	unsigned int	nb;

	count = 0;
	if (n < 0)
	{
		nb = (unsigned int)-n;
		count++;
	}
	else
		nb = (unsigned int)n;
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char				*ft_itoa(int n)
{
	unsigned int	len;
	char			*str;

	len = ft_lennbr(n);
	if (n == 0)
	{
		if (!(str = ft_strnew(1)))
			return (NULL);
		str[0] = '0';
	}
	else
	{
		if (!(str = ft_strnew(len)))
			return (NULL);
		str = ft_nbrstr(n, str, len);
	}
	return (str);
}
