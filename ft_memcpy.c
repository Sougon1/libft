/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:42:33 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/18 14:30:43 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest1;
	char	*src1;
	size_t	i;

	i = 0;
	dest1 = (char *) dest;
	src1 = (char *) src;
	while (i != n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int main ()
{
	char dest[11];
	char *src = "coucou c'est moi !";
	ft_memcpy(dest, src, 11);
	printf("%s\n", dest);

}*/
