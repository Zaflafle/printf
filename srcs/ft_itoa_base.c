/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:03:55 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/29 16:44:51 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

char	*ft_convert(long long int n, int base, char *str, int i)
{
	long long int	div;
	char			temp;
	int				sign;

	div = 1;
	sign = (n < 0) ? -1 : 1;
	if (n < 0)
		str[i++] = '-';
	while ((n / (div * base)) != 0 && (div * base > 0))
		div *= base;
	while (div != 0)
	{
		temp = '0' + ((n / div) * sign);
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

char	*ft_itoa_base(long long int n, int base)
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
	if (base != 10)
		return (ft_convert((long long unsigned int)n, base, str, 0));
	else
		return (ft_convert(n, base, str, 0));
}

int		ft_pow(unsigned long long v, unsigned int base)
{
	if (v == 0)
		return (0);
	else
		return (1 + ft_pow(v / base, base));
}

char	*ft_itoa_base_p(unsigned long long value, unsigned int base)
{
	char				*res;
	unsigned long long	p;
	int					i;

	i = ft_pow(value, base);
	p = value;
	if (value == 0)
		i = 1;
	if (!(res = ft_strnew(i)) || base < 2 || base > 16)
		return (NULL);
	while (--i >= 0)
	{
		res[i] = (p % base < 10) ? p % base + 48 : p % base - 10 + 'a';
		p = p / base;
	}
	return (res);
}

char	*ft_itoa_base_neg(unsigned long long int value, int base)
{
	int							i;
	char						*nbr;
	unsigned long long int		tmp;

	tmp = value;
	i = (value == 0) ? 1 : 0;
	while (tmp)
	{
		tmp = tmp / base;
		i++;
	}
	nbr = (char*)ft_memalloc(sizeof(nbr) * i);
	nbr[i] = '\0';
	while (i-- > 0)
	{
		nbr[i] = (value % base) + (value % base > 9 ? 'a' - 10 : '0');
		value = value / base;
	}
	return (nbr);
}
