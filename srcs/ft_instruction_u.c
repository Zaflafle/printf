/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_u.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 05:57:39 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/03 20:45:14 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static int		ft_instruction_u_yes(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	t_count	env;

	ft_bzero(&env, sizeof(t_count));
	if (list->chetoile == 1)
		list->taille_cham = va_arg(*args, int);
	if (list->pretoile == 1)
		list->precision = va_arg(*args, int);
	ft_flag_cast(args, list);
	if (list->point == 1)
	{
		tmp = ft_app_taille_precipour_d(list, &env.u);
		list->str = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	if (list->moins == 1)
		tmp = ft_app_taille_cham_moins(list);
	else
		tmp = ft_app_taille_cham(list);
	env.ret = env.ret + ft_strlen(tmp);
	ft_putstr(tmp);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (env.ret);
}

static void		ft_instruction_u_no_bis(t_count *env, t_printf *list, char *tmp)
{
	if (list->point == 1 && list->precision == 0 && ft_atoi(list->str) == 0)
		env->ret = env->ret + 0;
	else
	{
		ft_putstr(tmp);
		env->ret = env->ret + ft_strlen(tmp);
	}
}

static int		ft_instruction_u_no(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	t_count	env;

	ft_bzero(&env, sizeof(t_count));
	list->dieze = 0;
	ft_flag_cast(args, list);
	if (list->point == 1)
	{
		tmp = ft_app_taille_precipour_d(list, &env.u);
		list->str = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	if (list->precision <= (int)ft_strlen(list->str) && list->point == 1)
		list->zero = 0;
	if (list->moins == 1)
		tmp = ft_app_taille_cham_moins(list);
	else
		tmp = ft_app_taille_cham(list);
	ft_instruction_u_no_bis(&env, list, tmp);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (env.ret);
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
