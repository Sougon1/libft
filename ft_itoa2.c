/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:37:14 by ghumm             #+#    #+#             */
/*   Updated: 2023/11/02 16:53:58 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*createstr(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	return (ft_strdup(""));
}

static size_t	countn(int n)
{
	size_t	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		count;
	char	sig;

	count = countn(n);
	createstr(n);
	if (n < 0)
	{
		sig = '-';
		n = -n;
	}
	ptr = (char *)malloc(count + 1 + (sig == '-'));
	if (!(ptr))
		return (NULL);
	ptr[count] = '\0';
	if (sig)
		ptr[0] = sig;
	while (n != 0)
	{
		count--;
		ptr[count] = (n % 10) + 48;
		n /= 10;
	}
	return (ptr);
}
