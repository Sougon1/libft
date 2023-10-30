/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:08:59 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/27 16:08:25 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	nbr_mot(char const *s, char c)
{
	int	i;
	int mot;
	
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
	ptr = ((char *)malloc(start + 1) * sizeof(char *));
	if (!(ptr))
		return (NULL);
	ft_memcpy(ptr, s - start, start);
	ptr[start] = '\0';
	return (ptr);
}

static char	**sep_mot(const char *s, char c)
{
	int	nbr_mot2;
	char	**ptr;
	int	i;

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
	return(ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*ptr2;
	int 	i;

	if (s == NULL)
		return (NULL);
	if (c == '\0' || ft_strchr(s, c) == NULL)
	{
		ptr = (char **)malloc(2 * sizeof(char *));
		if (!(ptr))
			return (NULL);
		ptr[0] = ft_strdup(s);
		ptr[1] = NULL;
		return (ptr);
	}
	ptr = sep_mot(s, c);	
	return (ptr);
	free(ptr);
 }
