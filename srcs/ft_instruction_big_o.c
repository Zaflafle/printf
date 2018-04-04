/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_big_o.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 07:36:42 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/03 22:04:28 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static int		ft_instruction_big_o_yes(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int ret;

	ret = 0;
	if (list->chetoile == 1)
		list->taille_cham = va_arg(*args, int);
	ft_flag_cast(args, list);
	tmp = ft_app_taille_cham(list);
	ret = ret + ft_strlen(tmp);
	ft_putstr(tmp);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

static void		ft_instruction_big_o_no_bis(t_printf *list, char *tmp,
				int *u, int *ret)
{
	if (list->plus == 1)
	{
		ft_putchar('+');
		*ret = *ret + 1;
	}
	if (list->aq_aq == 1)
	{
		if (tmp[0] != '-')
			ft_putchar(' ');
		*ret = *ret + 1;
	}
	if (list->dieze == 1 && *u != 2 && list->champ != 1)
	{
		ft_putchar('0');
		*ret = *ret + 1;
	}
	if (list->point == 1 && *u == 2 && list->precision == 0 &&
		list->champ == 1 && list->dieze == 0)
		ft_dell_zero(tmp);
}

static void		ft_instruction_big_o_no_ter(t_printf *list, char *tmp,
				int u, int *ret)
{
	if (list->point == 1 && u == 2 && list->precision == 0 &&
		list->champ == 0 && list->dieze == 0)
		*ret = *ret + 0;
	else
	{
		*ret = *ret + ft_strlen(tmp);
		ft_putstr(tmp);
	}
}

static int		ft_instruction_big_o_no(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int ret;
	int u;

	ret = 0;
	u = 0;
	ft_flag_cast(args, list);
	if (ft_atoi(list->str) == 0)
		u = 2;
	if (list->point == 1)
	{
		tmp = ft_app_taille_precipour_d(list, &u);
		list->str = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	if (list->moins == 1)
		tmp = ft_app_taille_cham_moins_o(list, &u);
	else
		tmp = ft_app_taille_cham(list);
	ft_instruction_big_o_no_bis(list, tmp, &u, &ret);
	ft_instruction_big_o_no_ter(list, tmp, u, &ret);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

int				ft_instruction_big_o(va_list *args, char *format,
				t_printf *list)
{
	char	*tmp;
	int		ret;

	ret = 0;
	tmp = NULL;
	if (list->flag_l == 1)
	{
		list->flag_ll = 1;
		list->flag_l = 0;
	}
	else
		list->flag_l = 1;
	if (list->pretoile != 1 && list->chetoile != 1)
		ret = ret + ft_instruction_big_o_no(args, format, list, tmp);
	else if (list->pretoile == 1 || list->chetoile == 1)
		ret = ret + ft_instruction_big_o_yes(args, format, list, tmp);
	return (ret);
}
