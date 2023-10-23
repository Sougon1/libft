/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:45:16 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/23 10:39:41 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char *a;
	a = s;

	while (n-- > 0 && *a++ != '\0')
	{
		if (*a == c)
		{
			return ((void *)a);
		}
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char *str = "Hello World !";
	char rech = 'o';
	const void *f = ft_memchr(str, rech, 6);
	if (f != NULL)
		printf("o trouve : %s\n", (const char *) f);
	else
		printf("caractere non trouvee");



	const void *f2 = memchr(str, rech, 6);
    if (f2 != NULL)
        printf("o trouve : %s\n", (const char *) f2);
    else
        printf("caractere non trouvee");

}*/
