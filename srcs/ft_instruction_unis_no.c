/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_unis_no.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 20:38:04 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/09 20:42:01 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static void		ft_instruction_unis_no_three(t_count *env, t_printf *list,
				wchar_t *tmp)
{
	if (list->unico == NULL)
	{
		ft_putstr("(null)");
		env->ret = env->ret + 6;
	}
	else if (ft_strlen_w(list->unico) == 0)
		env->ret = env->ret + 0;
	else
	{
		env->ret = env->ret + ft_strlen_w(list->unico);
		while (list->unico[env->p] != '\0')
			ft_putchawr(list->unico[env->p++]);
	}
}

static void		ft_instruction_unis_no_two(t_count *env, t_printf *list,
				wchar_t *tmp)
{
	if (list->moins == 1 && list->unico != NULL)
	{
		while (list->unico[env->p] != '\0')
			ft_putchawr(list->unico[env->p++]);
		env->ret = env->ret + ft_tfc(list);
		env->ret = env->ret + ft_strlen_w(list->unico);
	}
	else if (list->point == 1)
	{
		while (env->i < list->taille_cham)
		{
			ft_putchar(' ');
			env->i++;
		}
		env->ret = 0;
		env->ret = env->ret + env->i;
	}
	else
	{
		while (tmp[env->p] != '\0')
			ft_putchawr(tmp[env->p++]);
		ft_strdel_w(&tmp);
	}
}

static wchar_t	*ft_instruction_unis_no_one(t_count *env, t_printf *list,
					wchar_t *tmp)
{
	if (list->champ == 1 && list->moins != 1)
		tmp = ft_app_taille_cham_w(list);
	if (list->unico == NULL)
	{
		ft_putstr("(null)");
		env->ret = env->ret + 6;
	}
	else if (ft_strlen_w(list->unico) == 0)
		env->ret = env->ret + 0;
	else
		env->ret = env->ret + ft_strlen_w(tmp);
	return (tmp);
}

int				ft_tfc(t_printf *list)
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

int				ft_instruction_unis_no(va_list *args,
				t_printf *list, wchar_t *tmp)
{
	t_count	env;

	ft_bzero(&env, sizeof(t_count));
	list->unico = va_arg(*args, wchar_t*);
	if (list->champ == 1)
	{
		tmp = ft_instruction_unis_no_one(&env, list, tmp);
		ft_instruction_unis_no_two(&env, list, tmp);
	}
	else
		ft_instruction_unis_no_three(&env, list, tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (env.ret);
}
