/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app_cham_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:41:41 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/03 21:05:34 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static void	ft_app_taille_cham_c_two(t_printf *list, char *tmp, t_count *env)
{
	if (env->j < env->t)
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
		tmp[env->i] = list->c;
	}
	else
	{
		env->k = 0;
		while (env->i < env->j)
		{
			tmp[env->i] = list->c;
			env->i++;
			env->k++;
		}
	}
}

static void	ft_app_taille_cham_c_one(t_printf *list, char *tmp)
{
	if (list->taille_cham == 2)
	{
		tmp[0] = ' ';
		tmp[1] = list->c;
	}
}

char		*ft_app_taille_cham_c(t_printf *list)
{
	t_count	env;
	char	*tmp;

	ft_bzero(&env, sizeof(t_count));
	tmp = NULL;
	env.j = 1;
	env.k = list->taille_cham;
	if (env.j > env.k)
		env.t = env.j;
	else
		env.t = env.k;
	if (!(tmp = (char*)malloc((sizeof(char) * (env.t + 1)))))
		return (0);
	tmp[env.t] = '\0';
	env.k = list->taille_cham - env.j;
	ft_app_taille_cham_c_one(list, tmp);
	ft_app_taille_cham_c_two(list, tmp, &env);
	return (tmp);
}
