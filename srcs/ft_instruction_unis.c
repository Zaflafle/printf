/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_unis.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 08:43:02 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/06 22:58:11 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

int			ft_tfc(t_printf *list)
{
	int	i;
	int j;

	j = list->taille_cham - ft_strlen_w(list->unico);
	i = 0;
	
	while (i < j)
	{
		ft_putchar(' ');
		i++;
	}
	return (i);
}

static int		ft_instruction_unis_no(va_list *args, char *format,
				t_printf *list, wchar_t *tmp)
{
	int ret;
	int p;
	int i;

	ret = 0;
	p = 0;
	i = 0;
	list->unico = va_arg(*args, wchar_t*);
	if (list->champ == 1)
	{
		if (list->champ == 1 &&list->moins != 1)
			tmp = ft_app_taille_cham_w(list);
		if (list->unico == NULL)
		{
			ft_putstr("(null)");
			ret = ret + 6;
		}
		else if (ft_strlen_w(list->unico) == 0)
			ret = ret + 0;
		else
			ret = ret + ft_strlen_w(tmp);
		if (list->moins == 1)
		{
			while (list->unico[p] != '\0')
				ft_putchawr(list->unico[p++]);
			ret = ret + ft_tfc(list);
			ret = ret + ft_strlen_w(list->unico);
		}
		else if (list->point == 1)
		{
			while (i < list->taille_cham)
			{
				ft_putchar(' ');
				i++;
			}
			ret = 0;
			ret = ret + i;
		}
		else
		{
			while (tmp[p] != '\0')
				ft_putchawr(tmp[p++]);
			ft_strdel_w(&tmp);
		}
	}
	else 
	{
		if (list->unico == NULL)
		{
			ft_putstr("(null)");
			ret = ret + 6;
		}
		else if (ft_strlen_w(list->unico) == 0)
			ret = ret + 0;
		else
		{
			ret = ret + ft_strlen_w(list->unico);
			while (list->unico[p] != '\0')
				ft_putchawr(list->unico[p++]);
		}
	}
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

static int		ft_instruction_unis_yes(va_list *args, char *format,
				t_printf *list, wchar_t *tmp)
{
	int ret;
	int p;

	ret = 0;
	p = 0;
	if (list->champ == 1)
	{
		if (list->chetoile == 1)
			list->taille_cham = va_arg(*args, int);
	}
	if (list->point == 1)
	{
		if (list->pretoile == 1)
			list->precision = va_arg(*args, int);
	}
	list->unico = va_arg(*args, wchar_t*);
	if (list->point == 1)
	{
		tmp = ft_app_precision_wchar(list);
		list->unico = ft_strdup_wchar(tmp);
		ft_strdel_w(&tmp);
	}
	tmp = ft_app_taille_cham_w(list);
	ret = ret + ft_strlen_w(tmp);
	while (tmp[p] != '\0')
		ft_putchawr(tmp[p++]);
	ft_strdel_w(&tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

int				ft_instruction_unis(va_list *args, char *format, t_printf *list)
{
	wchar_t	*tmp;
	int		ret;

	ret = 0;
	tmp = NULL;
	if (list->pretoile != 1 && list->chetoile != 1)
		ret = ret + ft_instruction_unis_no(args, format, list, tmp);
	else if (list->pretoile == 1 || list->chetoile == 1)
		ret = ret + ft_instruction_unis_yes(args, format, list, tmp);
	return (ret);
}
