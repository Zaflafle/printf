/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app_preci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:23:29 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/03 19:29:16 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static void	ft_app_taille_precipour_d_two(t_printf *list,
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

static void	ft_app_taille_precipour_d_one(t_printf *list, char *tmp,
			t_count *env, int *u)
{
	while (env->i < env->k)
		tmp[env->i++] = '0';
	env->k = 0;
	while (env->i < list->precision)
	{
		if (*u == 1 && list->str[env->k] == '-')
			tmp[env->i] = '0';
		else
			tmp[env->i] = list->str[env->k];
		env->i++;
		env->k++;
	}
}

char		*ft_app_taille_precipour_d(t_printf *list, int *u)
{
	t_count	env;
	char	*tmp;

	ft_bzero(&env, sizeof(t_count));
	tmp = NULL;
	env.j = ft_strlen(list->str);
	env.k = list->precision;
	if (env.j > env.k)
		env.t = env.j;
	else
		env.t = env.k;
	if (!(tmp = (char*)malloc((sizeof(char) * (env.t + 1)))))
		return (0);
	ft_bzero(tmp, env.t + 1);
	tmp[env.t] = '\0';
	env.k = list->precision - env.j;
	if (env.j < env.t)
		ft_app_taille_precipour_d_one(list, tmp, &env, u);
	else
		ft_app_taille_precipour_d_two(list, tmp, &env);
	return (tmp);
}

char		*ft_app_precision(t_printf *list)
{
	int		i;
	int		k;
	int		j;
	int		t;
	char	*tmp;

	tmp = NULL;
	i = 0;
	j = ft_strlen(list->str);
	k = list->precision;
	t = 0;
	if (k > j)
		t = j;
	else
		t = k;
	if (!(tmp = (char*)ft_memalloc(t + 1)))
		return (0);
	tmp[t] = '\0';
	while (i < t)
	{
		tmp[i] = list->str[i];
		i++;
	}
	return (tmp);
}

wchar_t		*ft_app_precision_wchar(t_printf *list)
{
	int		i;
	int		k;
	int		j;
	int		t;
	wchar_t	*tmp;

	i = 0;
	j = ft_strlen_w(list->unico);
	k = list->precision;
	t = 0;
	if (k > j)
		t = j;
	else
		t = k;
	if (!(tmp = (wchar_t*)ft_memalloc(t + 1)))
		return (0);
	tmp[t] = '\0';
	while (i < t)
	{
		tmp[i] = list->unico[i];
		i++;
	}
	return (tmp);
}
