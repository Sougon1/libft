/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:08:59 by ghumm             #+#    #+#             */
/*   Updated: 2023/11/10 10:29:47 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	nbr_mot(char const *s, char c)
{
	int	i;
	int	mot;

	mot = 0;
	i = 0;
	while (*s)
	{
		if (*s == c)
			i = 0;
		else if (i == 0)
		{
			i = 1;
			mot++;
		}
		s++;
	}
	return (mot);
}

static char	*mot(const char *s, char c)
{
	size_t	start;
	char	*ptr;

	start = 0;
	while (*s && *s != c)
	{
		start++;
		s++;
	}
	ptr = (char *)malloc(start + 1);
	if (!(ptr))
		return (NULL);
	ft_memcpy(ptr, s - start, start);
	ptr[start] = '\0';
	return (ptr);
}

static char	**sep_mot(const char *s, char c)
{
	int		nbr_mot2;
	char	**ptr;
	int		i;

	nbr_mot2 = nbr_mot(s, c);
	ptr = (char **)malloc((nbr_mot2 + 1) * sizeof(char *));
	if (!(ptr))
		return (NULL);
	i = 0;
	while (i < nbr_mot2)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			ptr[i] = mot(s, c);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	ptr[i] = NULL;
	return (ptr);
}

static char	*cpynul(char const *s)
{
	int		i;
	char	*dest;
	int		j;

	j = 0;
	if (s[0] == '\0')
		return (NULL);
	dest = (char *)malloc(ft_strlen(s) + 1);
	if (!(dest))
		return (NULL);
	i = 0;
	while (s[j])
	{
		dest[i] = s[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (s == NULL)
		return (NULL);
	if (c == '\0')
	{
		ptr = (char **)malloc(2 * sizeof(char *));
		if (!(ptr))
			return (NULL);
		ptr[0] = cpynul(s);
		ptr[1] = NULL;
		return (ptr);
	}
	return (sep_mot(s, c));
}
/*
int main()
{
	const char *str = "aa\0bbb";
	char c = '\0';

	char **res = ft_split(str, c);
	int i = 0;
	while (res[i] != NULL)
	{
		printf ("resultat[%d] = %s\n",i ,res[i]);
		i++;
	}
}*/
