/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:15:16 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/23 11:52:14 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char *strnstr(const char *big, const char *little, size_t len)
{
	size_t v = strlen(little);

	if (len <= 0)
		return (char *)big;
	if (v == 0)
		return (char *)big;
	while (*big != '\0' && v >= litlle)
	{
		if (*big++ == *little++ && len-- = 0)
		{
			if (*big != *little)
			{
				
			}
			return ((char *)little);
		}
	}
}
