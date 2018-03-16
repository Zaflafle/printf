/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_c.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 05:12:29 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/07 00:51:40 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static int		ft_instruction_c_no(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int ret;

	ret = 0;
	list->c = (char)va_arg(*args, int);
	if (list->c == '\0')
		list->null = 1;
	if (list->moins == 1)
	{
		tmp = ft_app_taille_cham_moins_c(list);
		ret = ret + list->taille_cham;
	}
	else
	{
		tmp = ft_app_taille_cham_c(list);
		ret = ret + list->taille_cham;
	}
	if (list->null == 1 && list->champ == 1)
		ft_nputstr(tmp, ret);
	else if (list->champ == 0)
	{
		ft_putchar(list->c);
		ret = ret + 1;
	}
	else
		ft_putstr(tmp);
	ft_strdel(&tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

static int		ft_instruction_c_yes(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int ret;

	ret = 0;
	if (list->champ == 1)
	{
		if (list->chetoile == 1)
			list->taille_cham = va_arg(*args, int);
		if (list->taille_cham == 0)
			list->champ = 0;
		if (list->taille_cham < 0)
		{
			list->taille_cham = list->taille_cham * -1;
			list->moins = 1;
		}
	}
	list->c = (char)va_arg(*args, int);
	if (list->c == '\0')
	list->null = 1;
	if (list->moins == 1)
	{
		tmp = ft_app_taille_cham_moins_c(list);
		ret = ret + list->taille_cham;
	}
	else
	{
		tmp = ft_app_taille_cham_c(list);
		ret = ret + list->taille_cham;
	}
	if (list->null == 1 && list->champ == 1)
		ft_nputstr(tmp, ret);
	else if (list->champ == 0)
	{
		ft_putchar(list->c);
		ret = ret + 1;
	}
	else
		ft_putstr(tmp);
	ft_strdel(&tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

int				ft_instruction_c(va_list *args, char *format, t_printf *list)
{
	char	*tmp;
	int		ret;

	ret = 0;
	tmp = NULL;
	if (list->flag_l == 1)
		ret = ret + ft_instruction_unic(args, format, list);
	else
	{
		if (list->pretoile != 1 && list->chetoile != 1)
			ret = ret + ft_instruction_c_no(args, format, list, tmp);
		else if (list->pretoile == 1 || list->chetoile == 1)
			ret = ret + ft_instruction_c_yes(args, format, list, tmp);
	}
	return (ret);
}
