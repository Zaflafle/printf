/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_x_no.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 06:19:01 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/09 20:42:01 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static char		*ft_annex_x_yes_end(t_printf *list, char *tmp, int u, int *ret)
{
	if (list->dieze == 1 && ft_atoi(tmp) != 0)
	{
		if (list->zero == 1 && list->champ == 1)
			ft_dieze_zero(tmp);
		else if (list->champ == 1 && list->moins != 1 &&
				ft_strlen(list->str) != (unsigned int)list->taille_cham)
			ft_dieze_espace(tmp);
		else if (list->moins == 1)
			tmp = ft_dieze_moins(tmp);
		else
		{
			ft_putstr("0x");
			*ret = *ret + 2;
		}
	}
	if (list->point == 1 && u == 2 && list->precision == 0 && list->champ == 0)
		*ret = *ret + 0;
	else
	{
		*ret = *ret + ft_strlen(tmp);
		ft_putstr(tmp);
	}
	return (tmp);
}

static char		*ft_annex_x_yes_plus(t_printf *list, char *tmp, int *ret)
{
	if (list->plus == 1)
	{
		ft_putchar('+');
		*ret = *ret + 1;
	}
	else if (list->aq_aq == 1)
	{
		if (tmp[0] != '-')
			ft_putchar(' ');
		*ret = *ret + 1;
	}
	return (tmp);
}

static char		*ft_annex_x_yes(t_printf *list, char *tmp, int *u)
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
		if (*u == 2 && list->zero != 1 && list->precision == 0)
			tmp[0] = ' ';
		list->str = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	if (list->moins == 1)
	{
		tmp = ft_app_taille_cham_moins(list);
		if (list->point == 1 && *u == 2)
			tmp[0] = '0';
	}
	else
		tmp = ft_app_taille_cham_d(list);
	return (tmp);
}

int				ft_instruction_x_no(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int u;
	int ret;

	ret = 0;
	u = 0;
	ft_flag_cast(args, list);
	tmp = ft_annex_x_yes(list, tmp, &u);
	tmp = ft_annex_x_yes_plus(list, tmp, &ret);
	tmp = ft_annex_x_yes_end(list, tmp, u, &ret);
	free(list->str);
	list->str = NULL;
	free(tmp);
	tmp = NULL;
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}
