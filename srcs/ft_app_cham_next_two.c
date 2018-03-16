/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app_cham_next_two.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:51:29 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/05 02:53:19 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

char	*ft_app_taille_cham_moins_p(t_printf *list)
{
	int		k;
	int		i;
	int		j;
	int		t;
	char	*tmp;

	t = 0;
	i = 0;
	j = ft_strlen(list->str);
	k = list->taille_cham;
	if (list->plus == 1)
		k = list->taille_cham - 1;
	if (j > k)
		t = j;
	else
		t = k;
	if (!(tmp = (char*)malloc((sizeof(char) * (t + 3)))))
		return (0);
	tmp[t] = '\0';
	k = 0;
	if (j < t)
	{
		tmp[i] = '0';
		tmp[i + 1] = 'x';
		i = 2;
		j = j + 2;
		while (i < j)
		{
			tmp[i] = list->str[k];
			i++;
			k++;
		}
		if (list->plus == 1)
			k = list->taille_cham - 1;
		else
			k = list->taille_cham;
		while (i < k)
		{
			tmp[i] = ' ';
			i++;
		}
	}
	else
	{
		k = 0;
		tmp[i] = '0';
		tmp[i + 1] = 'x';
		j = j + 2;
		i = 2;
		while (i < j)
		{
			tmp[i] = list->str[k];
			i++;
			k++;
		}
	}
	return (tmp);
}

char	*ft_app_taille_cham_moins(t_printf *list)
{
	int		k;
	int		i;
	int		j;
	int		t;
	char	*tmp;

	t = 0;
	i = 0;
	j = ft_strlen(list->str);
	k = list->taille_cham;
	if (list->plus == 1)
		k = list->taille_cham - 1;
	if (j > k)
		t = j;
	else
		t = k;
	if (!(tmp = (char*)malloc((sizeof(char) * (t + 1)))))
		return (0);
	tmp[t] = '\0';
	k = 0;
	if (j < t)
	{
		while (i < j)
		{
			tmp[i] = list->str[k];
			i++;
			k++;
		}
		if (list->plus == 1)
			k = list->taille_cham - 1;
		else
			k = list->taille_cham;
		while (i < k)
		{
			tmp[i] = ' ';
			i++;
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

char	*ft_app_taille_cham_moins_o(t_printf *list)
{
	int		k;
	int		i;
	int		j;
	int		t;
	char	*tmp;

	t = 0;
	i = 0;
	j = ft_strlen(list->str);
	k = list->taille_cham;
	if (list->plus == 1)
		k = list->taille_cham - 1;
	if (j > k)
		t = j;
	else
		t = k;
	if (list->dieze == 1)
		t = t + 1;
	if (!(tmp = (char*)malloc((sizeof(char) * (t + 1)))))
		return (0);
	tmp[t] = '\0';
	k = 0;
	if (list->dieze == 1)
	{
		tmp[0] = '0';
		i++;
		j = j + 1;
	}
	if (j < t)
	{
		while (i < j)
		{
			tmp[i] = list->str[k];
			i++;
			k++;
		}
		if (list->plus == 1)
			k = list->taille_cham - 1;
		else
			k = list->taille_cham;
		while (i < k)
		{
			tmp[i] = ' ';
			i++;
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
