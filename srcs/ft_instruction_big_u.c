/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_big_u.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 18:07:11 by macuguen          #+#    #+#             */
/*   Updated: 2018/02/28 15:16:09 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static int		ft_instruction_big_u_yes(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int u;
	int ret;

	ret = 0;
	u = 0;
	if (list->chetoile == 1)
		list->taille_cham = va_arg(*args, int);
	if (list->point == 1)
	{
		if (list->pretoile == 1)
			list->precision = va_arg(*args, int);
	}
	ft_flag_cast(args, format, list);
	if (list->point == 1)
	{
		tmp = ft_app_taille_precipour_d(list, &u);
		list->str = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	if (list->moins == 1)
		tmp = ft_app_taille_cham_moins(list);
	else
		tmp = ft_app_taille_cham(list);
	if (list->plus == 1)
	{
		ft_putchar('+');
		ret = ret + 1;
	}
	else if (list->aq_aq == 1)
	{
		if (tmp[0] != '-')
		{
			ft_putchar(' ');
			ret = ret + 1;
		}
	}
	ret = ret + ft_strlen(tmp);
	ft_putstr(tmp);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

static int		ft_instruction_big_u_no(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int u;
	int ret;

	ret = 0;
	u = 0;
	ft_flag_cast(args, format, list);
	if (list->point == 1)
	{
		tmp = ft_app_taille_precipour_d(list, &u);
		list->str = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	if (list->moins == 1)
		tmp = ft_app_taille_cham_moins(list);
	else
		tmp = ft_app_taille_cham(list);
	if (list->plus == 1)
	{
		ft_putchar('+');
		ret = ret + 1;
	}
	else if (list->aq_aq == 1)
	{
		if (tmp[0] != '-')
		{
			ft_putchar(' ');
			ret = ret + 1;
		}
	}
	ret = ret + ft_strlen(tmp);
	ft_putstr(tmp);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

int				ft_instruction_big_u(va_list *args, char *format,
				t_printf *list)
{
	char	*tmp;
	int		ret;

	tmp = NULL;
	ret = 0;
	if (list->flag_l == 1)
	{
		list->flag_ll = 1;
		list->flag_l = 0;
	}
	else
		list->flag_l = 1;
	if (list->pretoile != 1 && list->chetoile != 1)
		ret = ret + ft_instruction_big_u_no(args, format, list, tmp);
	else if (list->pretoile == 1 || list->chetoile == 1)
		ret = ret + ft_instruction_big_u_yes(args, format, list, tmp);
	return (ret);
}
