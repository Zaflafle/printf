/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app_cham_next.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:46:19 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/05 17:34:08 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static void	ft_app_taille_cham_moins_w_two(t_printf *list,
			wchar_t *tmp, t_count *env)
{
	env->k = 0;
	while (env->i < env->j)
	{
		tmp[env->i] = list->unico[env->k];
		env->i++;
		env->k++;
	}
}

static void	ft_app_taille_cham_moins_w_one(t_printf *list,
			wchar_t *tmp, t_count *env)
{
	while (env->i < env->j)
	{
		tmp[env->i] = list->unico[env->k];
		env->i++;
		env->k++;
	}
	env->k = list->taille_cham;
	while (env->i < env->k)
	{
		tmp[env->i] = '1';
		env->i++;
	}
}

wchar_t		*ft_app_taille_cham_moins_w(t_printf *list)
{
	t_count	env;
	wchar_t	*tmp;

	ft_bzero(&env, sizeof(t_count));
	tmp = NULL;
	env.j = ft_strlen_w(list->unico);
	env.k = list->taille_cham;
	if (list->plus == 1)
		env.k = list->taille_cham - 1;
	if (env.j > env.k)
		env.t = env.j;
	else
		env.t = env.k;
	if (!(tmp = (wchar_t*)malloc((sizeof(wchar_t) * (env.t + 1)))))
		return (0);
	tmp[env.t] = '\0';
	env.k = 0;
	if (env.j < env.t)
		ft_app_taille_cham_moins_w_one(list, tmp, &env);
	else
		ft_app_taille_cham_moins_w_two(list, tmp, &env);
	return (tmp);
}
