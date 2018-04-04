/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parceur.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 19:53:25 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/28 20:46:28 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static int		ft_for_the_fnorme(t_printf *list)
{
	if (list->conv_d == 1)
		return (1);
	if (list->conv_i == 1)
		return (2);
	if (list->conv_o == 1)
		return (3);
	if (list->conv_u == 1)
		return (4);
	if (list->conv_s == 1)
		return (5);
	if (list->conv_c == 1)
		return (6);
	return (0);
}

static int		ft_structur_conv(t_printf *list)
{
	if (ft_for_the_fnorme(list) != 0)
		return (ft_for_the_fnorme(list));
	if (list->conv_p == 1)
		return (7);
	if (list->conv_X == 1)
		return (8);
	if (list->conv_U == 1)
		return (9);
	if (list->conv_O == 1)
		return (10);
	if (list->conv_S == 1)
		return (11);
	if (list->conv_C == 1)
		return (12);
	if (list->conv_x == 1)
		return (13);
	return (0);
}

static void		ft_choice_instruction_two(va_list *args, char *format,
		t_printf *list, int *ret)
{
	if (ft_structur_conv(list) == 7)
		*ret = *ret + ft_instruction_p(args, (char*)format, list);
	else if (ft_structur_conv(list) == 12)
		*ret = *ret + ft_instruction_unic(args, (char*)format, list);
	else if (ft_structur_conv(list) == 11)
		*ret = *ret + ft_instruction_unis(args, list);
	else if (ft_structur_conv(list) == 6)
		*ret = *ret + ft_instruction_c(args, (char*)format, list);
	else if (ft_structur_conv(list) == 4)
		*ret = *ret + ft_instruction_u(args, (char*)format, list);
	else if (ft_structur_conv(list) == 9)
		*ret = *ret + ft_instruction_big_u(args, (char*)format, list);
	else if (list->conv_prct == 1)
		*ret = *ret + ft_pourcent(list, format);
}

static void		ft_choice_instruction(va_list *args, char *format,
		t_printf *list, int *ret)
{
	if (ft_structur_conv(list) == 1 || ft_structur_conv(list) == 2)
		*ret = *ret + ft_instruction_d_i(args, (char*)format, list);
	else if (ft_structur_conv(list) == 3)
		*ret = *ret + ft_instruction_o(args, (char*)format, list);
	else if (ft_structur_conv(list) == 13)
		*ret = *ret + ft_instruction_x(args, (char*)format, list);
	else if (ft_structur_conv(list) == 5)
		*ret = *ret + ft_instruction_s(args, (char*)format, list);
	else if (ft_structur_conv(list) == 8)
		*ret = *ret + ft_instruction_big_x(args, (char*)format, list);
	else if (ft_structur_conv(list) == 10)
		*ret = *ret + ft_instruction_big_o(args, (char*)format, list);
	else
		ft_choice_instruction_two(args, (char*)format, list, ret);
}

int				ft_parceur(t_printf *list, char *format, va_list *args)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i]);
			ret++;
		}
		if ((format[i] == '%' && format[i + 1] != '\0') ||
				(format[i] == '%' &&
				format[i + 2] != '\0' && format[i + 2] != '\n'))
			if (format[i] == '%')
				ret = ret + ft_parce_instruction(list, format, &i);
		ft_choice_instruction(args, format, list, &ret);
		i++;
	}
	return (ret);
}
