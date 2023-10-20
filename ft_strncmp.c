/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:47:15 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/20 18:24:01 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (n-- > 0)
	{
		if (s1[a] != s2[b])
			return (s1[a] - s2[b]);
	//	printf("oui\n");
	a++;
	b++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	char *str1 = "1234a456789";
	char *str2 = "12346789";
	char *str3 = "1234a256799";
	char *str4 = "1234i856759";
	size_t n = 5;

	printf("str1 == str2 : %d\n", ft_strncmp(str1,  str2, n));
	printf("str1 > str3 : %d\n", ft_strncmp(str1, str3, n));
	printf("str1 < str4 : %d\n", ft_strncmp(str1, str4, n));
	printf("str3 < str4 : %d\n\n", ft_strncmp(str3, str4, n));
	printf(" 1 2 : %d\n ", strncmp(str1, str2, n));
    printf(" 1 3 : %d\n ", strncmp(str1, str3, n));
    printf(" 1 4 : %d\n ", strncmp(str1, str4, n));
    printf(" 3 4 : %d\n ", strncmp(str3, str4, n));

}
