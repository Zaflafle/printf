/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_cast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 05:18:48 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/03 20:36:16 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static void		ft_flag_cast_two(va_list *args, int base, t_printf *list)
{
	if (list->flag_j == 1)
	{
		list->str = ft_itoa_base_p((uintmax_t)va_arg(*args,
		long long int), base);
	}
	else if (list->flag_z == 1)
		list->str = ft_itoa_base_p((size_t)va_arg(*args, long long int), base);
	else if (list->conv_u == 1)
	{
		list->str = ft_itoa_base_p((unsigned long int)va_arg(*args,
		unsigned long int), base);
	}
	else if (list->conv_x == 1 || list->conv_X == 1)
	{
		list->str = ft_itoa_base_p((long long)va_arg(*args,
		long long int), base);
	}
	else if (list->conv_d == 1)
		list->str = ft_itoa_base(va_arg(*args, int), base);
	else if (list->conv_U == 1)
	{
		list->str = ft_itoa_base_p((unsigned long long int)va_arg(*args,
		unsigned long long int), base);
	}
}

static void		ft_flag_cast_one(va_list *args, int base, t_printf *list)
{
	if (list->flag_hh == 1 && list->conv_d == 0)
	{
		list->str = ft_itoa_base_p((signed char)va_arg(*args,
		long long int), base);
	}
	else if (list->flag_ll == 1)
	{
		list->str = ft_itoa_base_p((long long)va_arg(*args,
		long long int), base);
	}
	else if (list->flag_h == 1)
	{
		list->str = ft_itoa_base((short)va_arg(*args,
		long long int), base);
	}
	else if ((list->flag_l == 1 && list->conv_d == 1) ||
	(list->flag_l == 1 && list->conv_i == 1))
	{
		list->str = ft_itoa_base((long long)va_arg(*args,
		long long), base);
	}
	else if (list->conv_p)
		list->str = ft_itoa_base_p(va_arg(*args, unsigned long), base);
}

int				ft_flag_cast(va_list *args, t_printf *list)
{
	int base;

	base = ft_base(list);
	if ((list->flag_hh == 1 && list->conv_d == 0) || list->flag_ll == 1 ||
	list->flag_h == 1 || (list->flag_l == 1 && list->conv_d == 1) ||
	(list->flag_l == 1 && list->conv_i == 1) || list->conv_p)
		ft_flag_cast_one(args, base, list);
	else if (list->flag_j == 1 || list->flag_z == 1 ||
		list->conv_u == 1 || list->conv_x == 1 || list->conv_X == 1 ||
		list->conv_d == 1 || list->conv_U == 1)
		ft_flag_cast_two(args, base, list);
	else if (list->conv_o == 1)
	{
		list->str = ft_itoa_base_p((unsigned long long int)va_arg(*args,
		unsigned long long int), base);
	}
	else
		list->str = ft_itoa_base(va_arg(*args, long long int), base);
	return (0);
}
