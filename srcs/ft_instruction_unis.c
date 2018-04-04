/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_unis.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 08:43:02 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/31 15:46:35 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static void		ft_instruction_unis_yes_one(va_list *args, t_printf *list)
{
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
}

static int		ft_instruction_unis_yes(va_list *args, t_printf *list,
				wchar_t *tmp)
{
	t_count	env;

	ft_bzero(&env, sizeof(t_count));
	ft_instruction_unis_yes_one(args, list);
	list->unico = va_arg(*args, wchar_t*);
	if (list->point == 1)
	{
		tmp = ft_app_precision_wchar(list);
		list->unico = ft_strdup_wchar(tmp);
		ft_strdel_w(&tmp);
	}
	tmp = ft_app_taille_cham_w(list);
	env.ret = env.ret + ft_strlen_w(tmp);
	while (tmp[env.p] != '\0')
		ft_putchawr(tmp[env.p++]);
	ft_strdel_w(&tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (env.ret);
}

int				ft_instruction_unis(va_list *args, t_printf *list)
{
	wchar_t	*tmp;
	int		ret;

	ret = 0;
	tmp = NULL;
	if (list->pretoile != 1 && list->chetoile != 1)
		ret = ret + ft_instruction_unis_no(args, list, tmp);
	else if (list->pretoile == 1 || list->chetoile == 1)
		ret = ret + ft_instruction_unis_yes(args, list, tmp);
	return (ret);
}
