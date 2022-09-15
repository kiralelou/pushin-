/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohibot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 23:33:05 by ohibot            #+#    #+#             */
/*   Updated: 2022/08/26 23:45:53 by ohibot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}	

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
		c = b + 1;
			while (c <= 9)
			{
				ft_putchar((a) + '0');
				ft_putchar((b) + '0');
				ft_putchar((c) + '0');
				if (!(a == 7 && b == 8 && c == 9))
					write(1, ",  ", 2);
	c++;
			}
	b++;
		}
	a++;
	}
}
