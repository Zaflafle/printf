/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_o.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 05:16:59 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/03 23:32:43 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static char		*ft_annex_o_yes_plus(t_printf *list, char *tmp,
				int *ret, int *u)
{
	if (list->aq_aq == 1)
	{
		if (tmp[0] != '-')
			ft_putchar(' ');
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

static char		*ft_annex_o_yes(t_printf *list, char *tmp,
				int *u, int *ret)
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
		tmp = ft_app_taille_cham_moins_o(list, u);
	else
		tmp = ft_app_taille_cham(list);
	if (list->plus == 1)
	{
		ft_putchar('+');
		*ret = *ret + 1;
	}
	return (tmp);
}

static int		ft_instruction_o_yes(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int u;
	int ret;

	ret = 0;
	u = 0;
	if (list->chetoile == 1)
		list->taille_cham = va_arg(*args, int);
	ft_flag_cast(args, list);
	tmp = ft_annex_o_yes(list, tmp, &u, &ret);
	tmp = ft_annex_o_yes_plus(list, tmp, &ret, &u);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

int				ft_instruction_o(va_list *args, char *format, t_printf *list)
{
	char	*tmp;
	int		ret;

	tmp = NULL;
	ret = 0;
	if (list->pretoile != 1 && list->chetoile != 1)
		ret = ret + ft_instruction_o_no(args, format, list, tmp);
	else if (list->pretoile == 1 || list->chetoile == 1)
		ret = ret + ft_instruction_o_yes(args, format, list, tmp);
	return (ret);
}
