/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:44:25 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/25 13:19:27 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)malloc(ft_strlen(src) + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < ft_strlen(src))
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return ((char *)ptr);
}
