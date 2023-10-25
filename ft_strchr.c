/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:25:03 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/24 15:32:32 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] == c)
			return ((char *)(s + a));
		a++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = " ";
	char	*result = ft_strchr(str, ' ');

	if (result != NULL) {
		printf("Le caractère 'k' trouvé à l'index %s .\n", result);
	} else {
		printf("Le caractère 'k' n'a pas été trouvé dans la chaîne.\n");
		}
}*/
