/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shachan <shachan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 01:30:58 by shachan           #+#    #+#             */
/*   Updated: 2024/06/10 01:31:40 by shachan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;
    
    i = 0;
    while (s[i] != '\0')
    {
        f(i, s[i]);
        i++;
    }
}
