/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app_cham_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 19:03:52 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/03 21:16:34 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static void	ft_app_taille_cham_d_two(t_printf *list, char *tmp, t_count *env)
{
	env->k = 0;
	while (env->i < env->j)
	{
		tmp[env->i] = list->str[env->k];
		env->i++;
		env->k++;
	}
}

static void	ft_app_taille_cham_d_one(t_printf *list, char *tmp, t_count *env)
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
	if (list->dieze == 1 && list->conv_x != 1 && list->conv_X != 1)
		tmp[env->i - 1] = '0';
	while (env->i < list->taille_cham)
	{
		tmp[env->i] = list->str[env->k];
		env->i++;
		env->k++;
	}
}

char		*ft_app_taille_cham_d(t_printf *list)
{
	t_count	env;
	char	*tmp;

	ft_bzero(&env, sizeof(t_count));
	tmp = NULL;
	env.j = ft_strlen(list->str);
	env.k = list->taille_cham;
	if (env.j > env.k)
		env.t = env.j;
	else
		env.t = env.k;
	if (!(tmp = (char*)malloc((sizeof(char) * (env.t + 1)))))
		return (0);
	tmp[env.t] = '\0';
	env.k = list->taille_cham - env.j;
	if (env.j < env.t)
		ft_app_taille_cham_d_one(list, tmp, &env);
	else
		ft_app_taille_cham_d_two(list, tmp, &env);
	return (tmp);
}
