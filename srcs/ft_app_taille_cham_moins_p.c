/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app_taille_cham_moins_p.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:58:37 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/03 21:25:28 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static void	ft_app_taille_cham_moins_p_one(t_printf *list,
			char *tmp, t_count *env)
{
	tmp[env->i] = '0';
	tmp[env->i + 1] = 'x';
	env->i = 2;
	env->j = env->j + 2;
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

static void	ft_app_taille_cham_moins_p_two(t_printf *list,
			char *tmp, t_count *env)
{
	env->k = 0;
	tmp[env->i] = '0';
	tmp[env->i + 1] = 'x';
	env->j = env->j + 2;
	env->i = 2;
	while (env->i < env->j)
	{
		tmp[env->i] = list->str[env->k];
		env->i++;
		env->k++;
	}
}

char		*ft_app_taille_cham_moins_p(t_printf *list)
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
	if (!(tmp = (char*)malloc((sizeof(char) * (env.t + 3)))))
		return (0);
	tmp[env.t] = '\0';
	env.k = 0;
	if (env.j < env.t)
		ft_app_taille_cham_moins_p_one(list, tmp, &env);
	else
		ft_app_taille_cham_moins_p_two(list, tmp, &env);
	return (tmp);
}
