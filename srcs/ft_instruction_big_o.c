/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_big_o.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 07:36:42 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/06 22:08:35 by macuguen         ###   ########.fr       */
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
	ft_flag_cast(args, format, list);
	tmp = ft_app_taille_cham(list);
	ret = ret + ft_strlen(tmp);
	ft_putstr(tmp);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

static int		ft_instruction_big_o_no(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int ret;
	int u;

	ret = 0;
	u = 0;
	ft_flag_cast(args, format, list);	
	if (ft_atoi(list->str) == 0)
		u = 2;
	if (list->point == 1)
	{
		tmp = ft_app_taille_precipour_d(list, &u);
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
		ret = ret + 1;
	}
	if (list->aq_aq == 1)
	{
		if (tmp[0] != '-')
			ft_putchar(' ');
		ret = ret + 1;
	}
	if (list->dieze == 1 && u != 2 && list->champ != 1)
	{
		ft_putchar('0');
		ret = ret + 1;
	}
	if (list->point == 1 && u == 2 && list->precision == 0 &&
		list->champ == 1 && list->dieze == 0)
		ft_dell_zero(tmp);
	if (list->point == 1 && u == 2 && list->precision == 0 &&
		list->champ == 0 && list->dieze == 0)
		ret = ret + 0;
	else
	{
		ret = ret + ft_strlen(tmp);
		ft_putstr(tmp);
	}
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
