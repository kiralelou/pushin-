/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohibot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 00:40:30 by ohibot            #+#    #+#             */
/*   Updated: 2022/08/26 02:32:46 by ohibot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_numbers(void)
{
	int	n;

	n = '0';
	while (n <= '9' )
	{
		write(1, &n, 1);
		n++;
	}
}
