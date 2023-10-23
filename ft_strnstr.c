/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:15:16 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/23 13:17:41 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <string.h>
#include <bsd/string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i = 0;
	size_t v = strlen(little);
		
	if (v == 0)
		return (char *)big;
	while (*big != '\0' && len >= v)
	{
		while (i < v && big[i] == little[i])
			i++;
		if (i == v)
			return (char *)big;
		big++;
		len--;
	}
	return (NULL);
}

#include <stdio.h>
int main()
{
    char *str = "Hello worldd world hello";
    char *to_find = "hello";
	size_t taille = 30;

   char *res = ft_strnstr(str, to_find, taille);
	char *res2 = strnstr(str, to_find, taille);

   if (res == NULL)
        printf("Le mot '%s' n'a pas été retrouvé dans '%s'\n", to_find, str);
    else
        printf("Le mot '%s' a été retrouvé dans '%s'\n", to_find, res);

    if (res2 == NULL)
         printf("Le mot '%s' n'a pas été retrouvé dans '%s'\n", to_find, str);
    else
        printf("Le mot '%s' a été retrouvé dans '%s'\n", to_find, res2);

return 0;
}
