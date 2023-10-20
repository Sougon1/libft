/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:28:50 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/20 13:35:12 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlcat (char *dst , const char *src, size_t size)
{
	size_t	v1;
	size_t	v2;

	v1 = 0;
	v2 = 0;
	
	while (dst[v1] != 0)
	{
		v1++;
	}
	if (size <= v1)
		return v1;
	while (size - v1 - 1 > 0 && src[v2] != 0)
	{
		dst[v1++] = src[v2++];
	}
	dst[v1] = '\0';

	return (v1);

}
#include <stdio.h>
int main()
{
	char dst[10]= "ab";
	char *src = "12345";

	printf("%ld\n", ft_strlcat(dst, src, 5));
	printf("%s\n", dst);
	printf("%s\n", src);
}
