/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohibot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 07:01:47 by ohibot            #+#    #+#             */
/*   Updated: 2022/09/11 07:01:50 by ohibot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	if (to_find[i2] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + i2] == to_find[i2] && str[i + i2] != '\0')
			i2++;
		if (to_find[i2] == '\0')
			return (str + i);
		i++;
		i2 = 0;
	}
	return (0);
}
