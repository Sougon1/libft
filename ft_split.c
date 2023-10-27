/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:08:59 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/27 15:12:16 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"





char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**ptr;
	char	*ptr2;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (c == '\0')
		return (s);
	if (ft_strchr(*s, c) == NULL)==> a retourner s dans **ptr[0]
		return (s);
	else
		while (*s)
		{
			if (*s == c)
			{
 				while (*s + 1 == c)
					s++;
				i++;
			}
			s++;
		}
	ptr = ((char *)malloc(i + 1));
	if (!(ptr))
		return (NULL);
	while (*ptr)
	{
		ptr2 = (char *)malloc(ft_substr(s, ft_strtrim(s), ft_strlen(ft_strtrim(s, c))));
		*ptr++;
 		ptr2++;
 	}
 }
