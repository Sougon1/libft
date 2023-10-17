/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghumm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:03:23 by ghumm             #+#    #+#             */
/*   Updated: 2023/10/17 15:45:47 by ghumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *s, int a, size_t v)
{
	unsigned char	*p;

	p = s;
	while (v > 0)
	{
		*p = a;
		p++;
		v--;
	}
	return (s);
}
/*
#include <stdio.h>
int main() {
    char s[] = "Coucou c'est moi !";

    ft_memset(s, '*', 5);

    printf("Contenu du tableau : %s\n", s);

    return 0;
}
*/
