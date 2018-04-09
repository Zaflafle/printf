/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app_taille_cham_w.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 21:49:18 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/07 18:43:00 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static wchar_t		*ft_app_taille_cham_w_one(t_printf *list, wchar_t *tmp, t_count *env)
{
	while (env->i < env->k)
	{
		if (list->zero == 1)
			tmp[env->i] = '0';
		else
			tmp[env->i] = ' ';
		env->i++;
	}
	env->k = 0;
	while (env->i < env->j)
	{
		tmp[env->i] = list->unico[env->k];
		env->i++;
		env->k++;
	}
	env->k = list->entier;
	return (tmp);
}

static wchar_t		*ft_app_taille_cham_w_two(t_printf *list, wchar_t *tmp, t_count *env)
{
	env->k = 0;
	while (env->i < env->j)
	{
		tmp[env->i] = list->unico[env->k];
		env->i++;
		env->k++;
	}
	return (tmp);
}

wchar_t		*ft_app_taille_cham_w(t_printf *list)
{
	t_count	env;
	wchar_t	*tmp;

	ft_bzero(&env, sizeof(t_count));
	tmp = NULL;
	env.j = ft_strlen_w(list->unico);
	env.k = list->taille_cham;
	if (env.j > env.k)
		env.t = env.j;
	else
		env.t = env.k;
	if (!(tmp = (wchar_t*)malloc((sizeof(wchar_t) * (env.t + 1)))))
		return (0);
	ft_bzero(tmp, sizeof(wchar_t) * (env.t + 1));
	env.k = list->taille_cham - env.j;
	if (env.j < env.t)
		tmp = ft_app_taille_cham_w_one(list, tmp, &env);
	else
		tmp = ft_app_taille_cham_w_two(list, tmp, &env);
	return (tmp);
}
