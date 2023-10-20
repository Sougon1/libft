/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:17:12 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/20 16:44:50 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = strlen(s) - 1;
	while (a-- >= 0)
	{
		if (s[a] == c)
			return ((char *)(s + a));
	}
	return (NULL);
}

#include <stdio.h>
int main()
{
	char *str = "Hello World !";

	char *res = ft_strrchr(str, 'o');
	
	if (res != NULL)
		printf("caractere o est trouvee a la %ld position\n", res - str);
	else
		printf("caratere non trouvee\n");
}
