/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app_cham_next_one.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:56:11 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/03 21:14:45 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static void	ft_app_taille_cham_moins_c_one(t_printf *list, char *tmp,
			t_count *env)
{
	if (env->j < env->t)
	{
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
	else
	{
		env->k = 0;
		while (env->i < env->j)
		{
			tmp[env->i] = list->str[env->k];
			env->i++;
			env->k++;
		}
	}
}

char		*ft_app_taille_cham_moins_c(t_printf *list)
{
	t_count	env;
	char	*tmp;

	ft_bzero(&env, sizeof(t_count));
	tmp = NULL;
	env.i = 1;
	env.j = 1;
	env.k = list->taille_cham;
	if (list->plus == 1)
		env.k = list->taille_cham - 1;
	if (env.j > env.k)
		env.t = env.j;
	else
		env.t = env.k;
	if (!(tmp = (char*)malloc((sizeof(char) * (env.t + 1)))))
		return (0);
	tmp[env.t] = '\0';
	tmp[0] = list->c;
	ft_app_taille_cham_moins_c_one(list, tmp, &env);
	return (tmp);
}
