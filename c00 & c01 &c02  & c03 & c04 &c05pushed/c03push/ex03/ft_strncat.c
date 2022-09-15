/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohibot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 07:09:30 by ohibot            #+#    #+#             */
/*   Updated: 2022/09/12 19:55:08 by ohibot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (i2 < nb && src[i2] != '\0')
	{
		dest[i] = src [i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}
