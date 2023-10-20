/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:28:50 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/20 12:52:01 by ghumm            ###   ########.fr       */
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
	while ((size-- - v1 - 1) && src[v2] != 0)
	{
		dst[v1++] = src[v2++];
	}
	dst[v1] = '\0';

	return (v1 + v2);

}
#include <stdio.h>
int main()
{
	char *dst = "abcd";
	char *src = "12345";

	printf("%ld\n", ft_strlcat(dst, src, 15));
	printf("%s\n", dst);
	printf("%s\n", src);
}
