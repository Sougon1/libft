/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:28:50 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/31 15:14:53 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	v1;
	size_t	v2;

	v1 = 0;
	v2 = 0;
	while (dst[v1] && v1 < size)
		v1++;
	while (src[v2] && v1 + 1 < size)
	{
		dst[v1] = src[v2];
		v1++;
		v2++;
	}
	if (v1 < size)
		dst[v1] = '\0';
	while (src[v2])
	{
		v1++;
		v2++;
	}
	return (v1);
}
/*
int main()
{
	char dst[10]= "ab";
	char *src = "12345";

	printf("%ld\n", ft_strlcat(dst, src, 5));
	printf("%s\n", dst);
	printf("%s\n", src);
}*/
