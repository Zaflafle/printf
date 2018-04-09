/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_next.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:18:39 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/08 20:27:43 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

char	*ft_convert_long(long long n, int base, char *str, int i)
{
	long long	div;
	char		temp;

	div = 1;
	if (n < 0)
	{
		n = -n;
		str[i] = '-';
		i++;
	}
	while (n / div >= base)
		div *= base;
	while (div > 0)
	{
		temp = '0' + n / div;
		if (temp > '9')
			str[i] = (temp + 39);
		else
			str[i] = temp;
		n %= div;
		div /= base;
		i++;
	}
	return (str);
}

char	*ft_itoa_base_long(long long n, int base)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(*str) * 22);
	i = 0;
	while (i < 22)
	{
		str[i] = '\0';
		i++;
	}
	i = 0;
	if (base != 10)
		return (ft_convert_long((long long)n, base, str, i));
	else
		return (ft_convert_long(n, base, str, i));
}
