/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_o_no.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 05:44:31 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/07 00:10:50 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static char		*ft_annex_o_no_plus(t_printf *list, char *tmp, int *ret, int *u)
{
	if (list->aq_aq == 1)
	{
		if (tmp[0] != '-')
			ft_putchar(' ');
		*ret = *ret + 1;
	}
	if (list->dieze == 1 && *u != 2 && list->champ != 1 && list->point != 1)
	{
		ft_putchar('0');
		*ret = *ret + 1;
	}
	if (list->point == 1 && *u == 2 && list->precision == 0 &&
		list->champ == 1 && list->dieze == 0)
		ft_dell_zero(tmp);
	if (list->point == 1 && *u == 2 && list->precision == 0 &&
		list->champ == 0 && list->dieze == 0)
		*ret = *ret + 0;
	else
	{
		*ret = *ret + ft_strlen(tmp);
		ft_putstr(tmp);
	}
	return (tmp);
}

static char		*ft_annex_o_no(t_printf *list, char *tmp, int *u, int *ret)
{
	if (ft_atoi(list->str) == 0)
		*u = 2;
	if (list->point == 1)
	{
		tmp = ft_app_taille_precipour_d(list, u);
		list->str = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	if (list->moins == 1)
		tmp = ft_app_taille_cham_moins_o(list);
	else
		tmp = ft_app_taille_cham(list);
	if (list->plus == 1)
	{
		ft_putchar('+');
		*ret = *ret + 1;
	}
	return (tmp);
}

int				ft_instruction_o_no(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int u;
	int ret;
	int i;

	ret = 0;
	i = 0;
	u = 0;
	ft_flag_cast(args, format, list);
	tmp = ft_annex_o_no(list, tmp, &u, &ret);
	tmp = ft_annex_o_no_plus(list, tmp, &ret, &u);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}
