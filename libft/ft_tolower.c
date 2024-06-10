/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachan <shachan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:52:06 by shachan           #+#    #+#             */
/*   Updated: 2024/05/25 16:52:08 by shachan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'A';
	printf("tolower: %c\n", tolower(c));
	printf("ft_tolower: %c\n", ft_tolower(c));

	c = 'a';
	printf("tolower: %c\n", tolower(c));
	printf("ft_tolower: %c\n", ft_tolower(c));

	c = '1';
	printf("tolower: %c\n", tolower(c));
	printf("ft_tolower: %c\n", ft_tolower(c));

	c = ' ';
	printf("tolower: %c\n", tolower(c));
	printf("ft_tolower: %c\n", ft_tolower(c));

	c = '!';
	printf("tolower: %c\n", tolower(c));
	printf("ft_tolower: %c\n", ft_tolower(c));
}*/