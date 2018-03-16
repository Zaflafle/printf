/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app_preci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:23:29 by macuguen          #+#    #+#             */
/*   Updated: 2018/02/28 19:26:48 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

char		*ft_app_taille_precipour_d(t_printf *list, int *u)
{
	int		k;
	int		i;
	int		j;
	int		t;
	char	*tmp;

	t = 0;
	i = 0;
	j = ft_strlen(list->str);
	k = list->precision;
	if (j > k)
		t = j;
	else
		t = k;
	if (!(tmp = (char*)malloc((sizeof(char) * (t + 1)))))
		return (0);
	tmp[t] = '\0';
	k = list->precision - j;
	if (j < t)
	{
		while (i < k)
			tmp[i++] = '0';
		k = 0;
		while (i < list->precision)
		{
			if (*u == 1 && list->str[k] == '-')
				tmp[i] = '0';
			else
				tmp[i] = list->str[k];
			i++;
			k++;
		}
	}
	else
	{
		k = 0;
		while (i < j)
		{
			tmp[i] = list->str[k];
			i++;
			k++;
		}
	}
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
