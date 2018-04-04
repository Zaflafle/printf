/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_s.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 06:48:26 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/28 20:51:04 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static char		*ft_annex_s_yes_plus(t_printf *list, char *tmp, int *ret)
{
	if (list->str == NULL)
		list->null = 1;
	if (list->point == 1)
	{
		tmp = ft_app_precision(list);
		list->str = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	if (list->moins == 1)
		tmp = ft_app_taille_cham_moins(list);
	else
		tmp = ft_app_taille_cham(list);
	if (list->null == 1)
	{
		ft_putstr("(null)");
		*ret = *ret + 6;
	}
	else
	{
		ft_putstr(tmp);
		*ret = *ret + ft_strlen(tmp);
	}
	return (tmp);
}

static int		ft_instruction_s_yes(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int	u;
	int	ret;

	ret = 0;
	u = 0;
	if (list->champ == 1)
	{
		if (list->chetoile == 1)
			list->taille_cham = va_arg(*args, int);
	}
	if (list->point == 1)
	{
		if (list->pretoile == 1)
			list->precision = va_arg(*args, int);
		if (list->precision < 0)
			list->point = 0;
	}
	list->str = va_arg(*args, char*);
	tmp = ft_annex_s_yes_plus(list, tmp, &ret);
	ft_strdel(&tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

int				ft_instruction_s(va_list *args, char *format, t_printf *list)
{
	char	*tmp;
	int		ret;

	tmp = NULL;
	ret = 0;
	if (list->flag_l == 1)
		ret = ret + ft_instruction_unis(args, list);
	else
	{
		if (list->pretoile != 1 && list->chetoile != 1)
			ret = ret + ft_instruction_s_no(args, format, list, tmp);
		else if (list->pretoile == 1 || list->chetoile == 1)
			ret = ret + ft_instruction_s_yes(args, format, list, tmp);
	}
	return (ret);
}
