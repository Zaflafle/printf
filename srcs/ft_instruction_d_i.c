/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_d_i.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 05:27:29 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/09 20:42:01 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static char		*ft_annex_d_i_yes(t_printf *list, char *tmp, int *u)
{
	if (ft_atoi(list->str) < 0)
		*u = 1;
	else if (ft_atoi(list->str) == 0)
		*u = 2;
	if (list->point == 1)
	{
		tmp = ft_app_taille_precipour_d(list, u);
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

static int		ft_instruction_d_i_yes_bis(va_list *args,
				t_printf *list)
{
	if (list->chetoile == 1)
	{
		list->taille_cham = va_arg(*args, int);
		if (list->taille_cham < 0)
		{
			list->taille_cham = list->taille_cham * -1;
			list->moins = 1;
		}
	}
	if (list->point == 1)
	{
		if (list->pretoile == 1)
			list->precision = va_arg(*args, int);
		if (list->precision < 0)
			list->precision = 0;
	}
}

static int		ft_instruction_d_i_yes(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int	u;
	int ret;

	ret = 0;
	u = 0;
	ft_instruction_d_i_yes_bis(args, list);
	ft_flag_cast(args, list);
	tmp = ft_annex_d_i_yes(list, tmp, &u);
	tmp = ft_annex_d_i_yes_plus(list, tmp, &ret);
	tmp = ft_annex_d_i_yes_end(list, tmp, u, &ret);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

int				ft_instruction_d_i(va_list *args, char *format, t_printf *list)
{
	int		ret;
	char	*tmp;

	tmp = NULL;
	ret = 0;
	if (list->conv_bd == 1)
	{
		if (list->flag_l == 1)
		{
			list->flag_ll = 1;
			list->flag_l = 0;
		}
		else
			list->flag_l = 1;
	}
	if (list->pretoile != 1 && list->chetoile != 1)
		ret = ret + ft_instruction_d_i_no(args, format, list, tmp);
	else if (list->pretoile == 1 || list->chetoile == 1)
		ret = ret + ft_instruction_d_i_yes(args, format, list, tmp);
	return (ret);
}
