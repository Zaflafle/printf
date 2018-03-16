/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_unic.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 08:20:31 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/01 21:28:58 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static int		ft_instruction_unic_yes(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int ret;

	ret = 0;
	if (list->champ == 1)
	{
		if (list->chetoile == 1)
			list->taille_cham = va_arg(*args, int);
	}
	if (list->point == 1)
	{
		if (list->pretoile == 1)
			list->precision = va_arg(*args, int);
	}
	list->str = va_arg(*args, char*);
	if (list->point == 1)
	{
		tmp = ft_app_precision(list);
		list->str = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	tmp = ft_app_taille_cham(list);
	ft_putstr(tmp);
	ft_strdel(&tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

static int		ft_instruction_unic_no(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int ret;

	ret = 0;
	list->w = va_arg(*args, wchar_t);
	ret = ret + ft_count_bit_w(list->w);
	ft_putchawr(list->w);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

int				ft_instruction_unic(va_list *args, char *format, t_printf *list)
{
	char	*tmp;
	int		ret;

	tmp = NULL;
	ret = 0;
	if (list->pretoile != 1 && list->chetoile != 1)
		ret = ret + ft_instruction_unic_no(args, format, list, tmp);
	else if (list->pretoile == 1 || list->chetoile == 1)
		ret = ret + ft_instruction_unic_yes(args, format, list, tmp);
	return (ret);
}
