/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app_cham_moins_o.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:51:29 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/03 21:19:13 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static void	ft_app_taille_cham_moins_o_three(t_printf *list,
		char *tmp, t_count *env)
{
	env->k = 0;
	while (env->i < env->j)
	{
		tmp[env->i] = list->str[env->k];
		env->i++;
		env->k++;
	}
}

static void	ft_app_taille_cham_moins_o_two(t_printf *list, char *tmp,
			t_count *env)
{
	while (env->i < env->j)
	{
		tmp[env->i] = list->str[env->k];
		env->i++;
		env->k++;
	}
	if (list->plus == 1)
		env->k = list->taille_cham - 1;
	else
		env->k = list->taille_cham;
	while (env->i < env->k)
	{
		tmp[env->i] = ' ';
		env->i++;
	}
}

static void	ft_app_taille_cham_moins_o_one(t_printf *list, char *tmp,
		t_count *env, int *u)
{
	if (list->dieze == 1 && *u != 2 && list->champ == 1 && list->point != 1)
	{
		tmp[0] = '0';
		env->i++;
		env->j = env->j + 1;
	}
}

char		*ft_app_taille_cham_moins_o(t_printf *list, int *u)
{
	t_count	env;
	char	*tmp;

	ft_bzero(&env, sizeof(t_count));
	tmp = NULL;
	env.j = ft_strlen(list->str);
	env.k = list->taille_cham;
	if (list->plus == 1)
		env.k = list->taille_cham - 1;
	if (env.j > env.k)
		env.t = env.j;
	else
		env.t = env.k;
	if (list->dieze == 1)
		env.t = env.t + 1;
	if (!(tmp = (char*)malloc((sizeof(char) * (env.t + 1)))))
		return (0);
	tmp[env.t] = '\0';
	env.k = 0;
	ft_app_taille_cham_moins_o_one(list, tmp, &env, u);
	if (env.j < env.t)
		ft_app_taille_cham_moins_o_two(list, tmp, &env);
	else
		ft_app_taille_cham_moins_o_three(list, tmp, &env);
	return (tmp);
}
