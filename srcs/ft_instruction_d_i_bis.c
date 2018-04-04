/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_d_i_bis.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:02:14 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/03 21:01:41 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static void		ft_annex_d_i_yes_end_bis(t_printf *list, char *tmp,
		int u, int *ret)
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
	if (list->point == 1 && u == 1 && list->champ == 0 &&
			(size_t)list->precision > ft_strlen(list->str))
	{
		ft_putchar('-');
		*ret = *ret + 1;
	}
	if (list->taille_cham < list->precision && u == 1 &&
			(size_t)list->precision >= ft_strlen(list->str))
	{
		ft_putchar('-');
		*ret = *ret + 1;
	}
}

char			*ft_annex_d_i_yes_end(t_printf *list, char *tmp,
		int u, int *ret)
{
	int i;

	i = 0;
	ft_annex_d_i_yes_end_bis(list, tmp, u, ret);
	if (list->point == 1 && u == 1 && list->champ == 1 &&
			(size_t)list->precision >= ft_strlen(list->str))
	{
		while (tmp[i] == ' ')
			i++;
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

static void		ft_annex_d_i_yes_plus_bis(t_printf *list, char *tmp, int *ret)
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
}

char			*ft_annex_d_i_yes_plus(t_printf *list, char *tmp, int *ret)
{
	ft_annex_d_i_yes_plus_bis(list, tmp, ret);
	if (list->zero == 1 && list->aq_aq == 1)
		tmp[0] = ' ';
	if (list->plus == 1 && list->zero == 1 && list->champ == 1 &&
			(size_t)list->taille_cham > ft_strlen(list->str))
		ft_plus_champ(tmp);
	else if (list->zero == 1 && list->plus == 1 &&
			(size_t)list->taille_cham - 1 == ft_strlen(list->str))
		tmp[0] = '+';
	else if (list->zero == 1 && list->plus == 1 &&
			(size_t)list->taille_cham < ft_strlen(list->str))
	{
		ft_putchar('+');
		*ret = *ret + 1;
	}
	return (tmp);
}
