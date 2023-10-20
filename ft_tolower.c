/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:21:48 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/20 15:23:13 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>

int	tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}