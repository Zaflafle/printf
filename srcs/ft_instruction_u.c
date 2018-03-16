/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 05:57:39 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/06 21:58:23 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static int		ft_instruction_u_yes(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int ret;
	int u;

	ret = 0;
	u = 0;
	if (list->chetoile == 1)
		list->taille_cham = va_arg(*args, int);
	if (list->point == 1)
	{
		if (list->pretoile == 1)
			list->precision = va_arg(*args, int);
	}
	ft_flag_cast(args, format, list);
	if (list->point == 1)
	{
		tmp = ft_app_taille_precipour_d(list, &u);
		list->str = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	if (list->moins == 1)
		tmp = ft_app_taille_cham_moins(list);
	else
		tmp = ft_app_taille_cham(list);
	ret = ret + ft_strlen(tmp);
	ft_putstr(tmp);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

static int		ft_instruction_u_no(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int ret;
	int u;

	ret = 0;
	u = 0;
	ft_flag_cast(args, format, list);
	if (list->point == 1)
	{
		tmp = ft_app_taille_precipour_d(list, &u);
		list->str = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	if (list->moins == 1)
		tmp = ft_app_taille_cham_moins(list);
	else
		tmp = ft_app_taille_cham(list);
	if (list->point == 1 && list->precision == 0)
		ret = ret + 0;
	else
	{
		ft_putstr(tmp);
		ret = ret + ft_strlen(tmp);
	}
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

int				ft_instruction_u(va_list *args, char *format, t_printf *list)
{
	char	*tmp;
	int		ret;

	tmp = NULL;
	ret = 0;
	if (list->pretoile != 1 && list->chetoile != 1)
		ret = ret + ft_instruction_u_no(args, format, list, tmp);
	else if (list->pretoile == 1 || list->chetoile == 1)
		ret = ret + ft_instruction_u_yes(args, format, list, tmp);
	return (ret);
}
