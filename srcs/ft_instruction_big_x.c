/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_big_x.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 07:21:41 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/09 20:42:01 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

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
	if (list->point == 1)
	{
		tmp = ft_app_taille_precipour_d(list, u);
		if (ft_atoi(list->str) == 0)
			tmp[0] = ' ';
		list->str = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	if (list->moins == 1)
		tmp = ft_app_taille_cham_moins(list);
	else
		tmp = ft_app_taille_cham_d(list);
	return (tmp);
}

static int		ft_instruction_big_x_yes(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int ret;
	int u;

	ret = 0;
	u = 0;
	if (list->chetoile == 1)
		list->taille_cham = va_arg(*args, int);
	ft_flag_cast(args, list);
	if (ft_atoi(list->str) == 0)
		u = 2;
	ft_strupper(tmp);
	tmp = ft_app_taille_cham(list);
	if (list->dieze == 1 && u != 2)
	{
		ft_putstr("0X");
		ret = ret + 2;
	}
	ret = ret + ft_strlen(tmp);
	ft_putstr(tmp);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

static int		ft_instruction_big_x_no(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int ret;
	int u;

	u = 0;
	ret = 0;
	ft_flag_cast(args, list);
	tmp = ft_annex_x_yes(list, tmp, &u);
	tmp = ft_annex_x_yes_plus(list, tmp, &ret);
	tmp = ft_annex_big_x_yes_end(list, tmp, u, &ret);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

int				ft_instruction_big_x(va_list *args, char *format,
				t_printf *list)
{
	char	*tmp;
	int		ret;

	ret = 0;
	tmp = NULL;
	if (list->pretoile != 1 && list->chetoile != 1)
		ret = ret + ft_instruction_big_x_no(args, format, list, tmp);
	else if (list->pretoile == 1 || list->chetoile == 1)
		ret = ret + ft_instruction_big_x_yes(args, format, list, tmp);
	return (ret);
}
