/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:31:50 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/18 16:26:13 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	v;

	v = 0;
	if (size == 0)
		return (0);
	else
	{
		while (size > 0 && src[v] != 0)
		{
			dest[v] = src[v];
			size--;
			v++;
		}
		dest[v] = '\0';
	}
}

#include <stdio.h>
int main()
{
	char dest[20];
	char *src = "Coucou c'est moi !";

	ft_strlcpy(dest, src, 20);
	printf("%s\n", dest);
}
