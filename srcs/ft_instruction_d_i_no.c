/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_d_i_no.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 02:48:38 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/09 20:42:01 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

int				*ft_annex_d_i_no_bis(t_printf *list, char *tmp, int *u)
{
	if (list->point == 1)
	{
		tmp = ft_app_taille_precipour_d(list, u);
		if (ft_atoi(list->str) == 0 && list->zero != 1 && list->precision == 0)
			tmp[0] = ' ';
		if (list->str != NULL)
		{
			free(list->str);
			list->str = NULL;
		}
		list->str = ft_strdup(tmp);
		if (tmp != NULL)
		{
			ft_strdel(&tmp);
			tmp = NULL;
		}
	}
	return (0);
}

char			*ft_annex_d_i_no(t_printf *list, char *tmp, int *u)
{
	ft_annex_d_i_no_bis(list, tmp, u);
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

void			ft_instruction_d_i_no_free(t_printf *list, char *tmp)
{
	if (list->str != NULL)
	{
		free(list->str);
		list->str = NULL;
	}
	if (tmp != NULL)
	{
		free(tmp);
		tmp = NULL;
	}
}

int				ft_instruction_d_i_no(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int u;
	int ret;

	ret = 0;
	u = 0;
	list->str = NULL;
	ft_flag_cast(args, list);
	if (ft_atoi(list->str) < 0)
		u = 1;
	else if ((long long)ft_atoi(list->str) == 0)
		u = 2;
	tmp = ft_annex_d_i_no(list, tmp, &u);
	if (list->plus == 1)
		tmp = ft_annex_d_i_no_plus(list, tmp, &ret, &u);
	tmp = ft_annex_d_i_no_end(list, tmp, u, &ret);
	ft_instruction_d_i_no_free(list, tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}
