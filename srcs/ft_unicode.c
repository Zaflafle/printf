/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unicode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:54:42 by macuguen          #+#    #+#             */
/*   Updated: 2018/02/28 14:05:28 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static void		init_wchart(unsigned char *f, wchar_t c, int mode)
{
	if (mode == 2)
	{
		f[0] = (((c & 0x07c0) >> 6) + 0xC0);
		f[1] = (((c & 0x003F)) + 0x80);
	}
	if (mode == 3)
	{
		f[0] = (((c & 0xF000) >> 12) + 0xE0);
		f[1] = (((c & 0x0FC0) >> 6) + 0x80);
		f[2] = (((c & 0x003F)) + 0x80);
	}
	if (mode == 4)
	{
		f[0] = (((c & 0x1C0000) >> 18) + 0xF0);
		f[1] = (((c & 0x03F000) >> 12) + 0x80);
		f[2] = (((c & 0x0FC0) >> 6) + 0x80);
		f[3] = (((c & 0x003F)) + 0x80);
	}
}

static void		ft_putcharn(unsigned char *f, int size)
{
	int i;

	i = 0;
	while (i != size)
	{
		write(1, &f[i], 1);
		i++;
	}
}

static char		ft_print_wchart(unsigned char *f, unsigned int e, wchar_t c)
{
	if (e < 0x07FF)
	{
		init_wchart(f, c, 2);
		ft_putcharn(f, 2);
		return (2);
	}
	else if (e < 0xFFFF)
	{
		init_wchart(f, c, 3);
		ft_putcharn(f, 3);
		return (3);
	}
	else
	{
		init_wchart(f, c, 4);
		ft_putcharn(f, 4);
		return (4);
	}
}

char			ft_putchawr(wchar_t c)
{
	unsigned char	f[4];
	unsigned int	e;

	e = (unsigned int)c;
	ft_bzero(f, 4);
	if (c >= 0 && c <= 255)
	{
		ft_putchar(c);
		return (1);
	}
	else if (e > 255 && e < 0x10FFFF)
		return (ft_print_wchart(f, e, c));
	return (1);
}
