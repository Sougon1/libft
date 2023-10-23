/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:41:52 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/23 16:16:02 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*s3;
	unsigned const char	*s4;

	s3 = s1;
	s4 = s2;
	while (n-- > 0 && *s3++ != '\0' && *s4++ != '\0')
	{
		if (*s3 != *s4)
			return (*s3 - *s4);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	const char *str1 = "Hello World !";
	const char *str2 = "Hello world !";
	int taille = 5;
	int taille1 = 10;
	
	int a = ft_memcmp(str1 ,str2 , taille);
	int b = ft_memcmp(str1 ,str2 , taille1);
    int c = memcmp(str1 ,str2 , taille);
    int d = memcmp(str1 ,str2 , taille1);

	if (a == 0)
		printf("aucune diff\n");
	else if (a > 0)
		printf("1 > 2 = %d\n", a);
	else 
		printf("1 < 2 = %d\n", a);

    if (b == 0)
        printf("aucune diff\n");
    else if (b > 0)
        printf("1 > 2 = %d\n", b);
    else
        printf("1 < 2 = %d\n", b);

    if (c == 0)
        printf("aucune diff\n");
    else if (c > 0)
        printf("1 > 2 = %d\n", c);
    else
        printf("1 < 2 = %d\n", c);

    if (d == 0)
         printf("aucune diff\n");
    else if (d > 0)
         printf("1 > 2 = %d\n", d);
    else
        printf("1 < 2 = %d\n", d);
}*/
