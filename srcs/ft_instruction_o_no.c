/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_o_no.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 05:44:31 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/03 20:43:49 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

char			*ft_plus_champ_tmfc(char *tmp)
{
	unsigned int		i;
	int					y;
	char				*tg;

	tg = ft_memalloc(ft_strlen(tmp));
	tg[0] = '0';
	i = 1;
	y = 0;
	while (i < ft_strlen(tmp) + 1)
	{
		tg[i] = tmp[y];
		y++;
		i++;
	}
	free(tmp);
	return (tg);
}

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

static void		*ft_annex_o_no_bis(t_printf *list, char *tmp, int *u)
{
	if (ft_atoi(list->str) == 0)
		*u = 2;
	if (list->zero == 1 && list->point == 1)
	{
		list->zero = 0;
		tmp = ft_app_taille_cham_moins(list);
	}
	if (list->point == 1)
	{
		tmp = ft_app_taille_precipour_d(list, u);
		list->str = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
}

static char		*ft_annex_o_no(t_printf *list, char *tmp, int *u, int *ret)
{
	ft_annex_o_no_bis(list, tmp, u);
	if (list->moins == 1)
		tmp = ft_app_taille_cham_moins_o(list, u);
	else
		tmp = ft_app_taille_cham(list);
	if (list->plus == 1)
	{
		ft_putchar('+');
		*ret = *ret + 1;
	}
	if (list->point == 1 && list->precision == 0 &&
		*u != 2 && list->champ == 0 && list->dieze == 1)
	{
		ft_putchar('0');
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
	ft_flag_cast(args, list);
	tmp = ft_annex_o_no(list, tmp, &u, &ret);
	tmp = ft_annex_o_no_plus(list, tmp, &ret, &u);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}
