/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_d_i_no.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 02:48:38 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/07 00:20:50 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static char		*ft_annex_d_i_no_end(t_printf *list, char *tmp, int u, int *ret)
{
	if (list->aq_aq == 1 && list->plus != 1)
	{
		if (tmp[0] != '-' && list->champ == 0)
		{
			ft_putchar(' ');
			*ret = *ret + 1;
		}
	}
	if (list->precision != 0 && list->zero == 1)
		ft_preci_zero_d(tmp, list, u);
	if (list->point == 1 && u == 1 && list->champ == 0 && (size_t)list->precision > ft_strlen(list->str))
	{
		ft_putchar('-');
		*ret = *ret + 1;
	}
	if (list->taille_cham < list->precision && u == 1 && (size_t)list->precision >= ft_strlen(list->str))
	{
		ft_putchar('-');
		*ret = *ret + 1;
	}
	if (list->point == 1 && u == 1 && list->champ == 1 && (size_t)list->precision >= ft_strlen(list->str))
	{
		int i;

		i = 0;
		
		while (tmp[i] == ' ')
		{
			i++;
		}
		tmp[i - 1] = '-';
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

static char		*ft_annex_d_i_no_plus(t_printf *list, char *tmp, int *ret)
{
	if (list->plus == 1 && ft_atoi(list->str) >= 0 &&
		list->zero != 1 && list->point != 1)
	{
		ft_putchar('+');
		*ret = *ret + 1;
	}
	else if (list->plus == 1 && ft_atoi(list->str) >= 0 &&
			list->zero != 1 && list->point == 1)
	{
		ft_plus_preci(tmp);
		if (list->moins == 1)
		{
			ft_putchar('+');
			*ret = *ret + 1;
		}
	}
	 if (list->zero == 1 && list->aq_aq == 1)
	 	tmp[0] = ' ';
	if (list->plus == 1 && list->zero == 1 && list->champ == 1 && (size_t)list->taille_cham > ft_strlen(list->str))
	{
		ft_plus_champ(tmp);
	}
	else if (list->zero == 1 && list->plus == 1 && (size_t)list->taille_cham - 1 == ft_strlen(list->str))
	{
		tmp[0] = '+';
	}		
	else if (list->zero == 1 && list->plus == 1 && (size_t)list->taille_cham < ft_strlen(list->str))
	{
		ft_putchar('+');
		*ret = *ret +1;
	}
	return (tmp);
}

static char		*ft_annex_d_i_no(t_printf *list, char *tmp, int *u)
{
	if (ft_atoi(list->str) < 0)
		*u = 1;
	else if (ft_atoi(list->str) == 0)
		*u = 2;
	if (list->point == 1)
	{
		tmp = ft_app_taille_precipour_d(list, u);
		if (ft_atoi(list->str) == 0 && list->zero != 1)
			tmp[0] = ' ';
		list->str = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	if (list->moins == 1)
		tmp = ft_app_taille_cham_moins(list);
	else
		tmp = ft_app_taille_cham_d(list);
	if (list->zero == 1 && *u == 1)
	{
		if (list->plus == 1)
			list->plus = 0;
		ft_neg_champ(tmp);
	}
	return (tmp);
}

int				ft_instruction_d_i_no(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int u;
	int ret;

	ret = 0;
	u = 0;
	ft_flag_cast(args, format, list);
	tmp = ft_annex_d_i_no(list, tmp, &u);
	tmp = ft_annex_d_i_no_plus(list, tmp, &ret);
	tmp = ft_annex_d_i_no_end(list, tmp, u, &ret);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}
