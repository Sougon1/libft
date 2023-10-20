/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:25:03 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/20 17:59:30 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a++] != '\0')
	{
		if (s[a] == c)
			return ((char *)(s + a));
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = "asfhkjwqhf,sn";
	char	*result = ft_strchr(str, 's');

	if (result != NULL) {
		printf("Le caractère 'k' trouvé à l'index %s .\n", result);
	} else {
		printf("Le caractère 'k' n'a pas été trouvé dans la chaîne.\n");
		}
}*/
