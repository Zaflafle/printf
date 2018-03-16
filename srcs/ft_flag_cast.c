/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_cast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 05:18:48 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/08 22:05:13 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

int		ft_flag_cast(va_list *args, char *format, t_printf *list)
{
	int base;

	base = ft_base(list);
	if (list->flag_hh == 1)
	{
		list->str = ft_itoa_base_p((signed char)va_arg(*args,
		signed char), base);
		return (ft_strlen(list->str));
	}
	else if (list->flag_ll == 1)
	{
		list->str = ft_itoa_base_p((long long)va_arg(*args,
		long long int), base);
		return (ft_strlen(list->str));
	}
	else if (list->flag_h == 1)
	{
		list->str = ft_itoa_base((short)va_arg(*args,
		long long int), base);
		return (ft_strlen(list->str));
	}
	else if ((list->flag_l == 1 && list->conv_d == 1) || (list->flag_l == 1 && list->conv_i == 1))
	{
		list->str = ft_itoa_base((long long)va_arg(*args,
		long long), base);
		return (ft_strlen(list->str));
		// 	long long arg;

		// arg = (long long)va_arg(*args,
		// 	 long long);
		// printf("||%lld\n",arg);
		// return (0);
	}
	else if (list->flag_j == 1)
	{
		list->str = ft_itoa_base_p((uintmax_t)va_arg(*args,
		long long int), base);
		return (ft_strlen(list->str));
	}
	else if (list->flag_z == 1)
	{
		list->str = ft_itoa_base_p((size_t)va_arg(*args, long long int), base);
		return (ft_strlen(list->str));
	}
	else if (list->conv_p)
	{
		list->str = ft_itoa_base_p(va_arg(*args, unsigned long), base);
		return (ft_strlen(list->str));
	}
	else if (list->conv_u == 1)
	{
		list->str = ft_itoa_base_p((unsigned long int)va_arg(*args,
		unsigned long int), base);
		return (ft_strlen(list->str));
	}
	else if (list->conv_x == 1 || list->conv_X == 1)
	{
		list->str = ft_itoa_base_p((long long)va_arg(*args, long long int), base);
		return (ft_strlen(list->str));
	}
	else if (list->conv_d == 1)
	{
		list->str = ft_itoa_base(va_arg(*args, int), base);
		return (ft_strlen(list->str));
	}
	else if (list->conv_U == 1)
	{
		list->str = ft_itoa_base_p((unsigned long long int)va_arg(*args,
		unsigned long long int), base);
		return (ft_strlen(list->str));
	}
	else if (list->conv_o == 1)
	{
		list->str = ft_itoa_base_p((unsigned long long int)va_arg(*args,
		unsigned long long int), base);
		return (ft_strlen(list->str));
	}
	else
	{
		list->str = ft_itoa_base(va_arg(*args, long long int), base);
		return (ft_strlen(list->str));
	}
}
