/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app_cham.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:41:41 by macuguen          #+#    #+#             */
/*   Updated: 2018/02/28 15:38:26 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

char	*ft_app_taille_cham_d(t_printf *list)
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
	if (j > k)
		t = j;
	else
		t = k;
	if (!(tmp = (char*)malloc((sizeof(char) * (t + 1)))))
		return (0);
	tmp[t] = '\0';
	k = list->taille_cham - j;
	if (j < t)
	{
		while (i < k)
		{
			if (list->zero == 1)
				tmp[i] = '0';
			else
				tmp[i] = ' ';
			i++;
		}
		k = 0;
		if (list->dieze == 1 && list->conv_x != 1)
			tmp[i - 1] = '0';
		while (i < list->taille_cham)
		{
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

char	*ft_app_taille_cham_c(t_printf *list)
{
	int		k;
	int		i;
	int		j;
	int		t;
	char	*tmp;

	t = 0;
	i = 0;
	j = 1;
	k = list->taille_cham;
	if (j > k)
		t = j;
	else
		t = k;
	if (!(tmp = (char*)malloc((sizeof(char) * (t + 1)))))
		return (0);
	tmp[t] = '\0';
	k = list->taille_cham - j;
	if (list->taille_cham == 2)
	{
		tmp[0] = ' ';
		tmp[1] = list->c;
	}
	if (j < t)
	{
		while (i < k)
		{
			if (list->zero == 1)
				tmp[i] = '0';
			else
				tmp[i] = ' ';
			i++;
		}
		k = 0;
		tmp[i] = list->c;
	}
	else
	{
		k = 0;
		while (i < j)
		{
			tmp[i] = list->c;
			i++;
			k++;
		}
	}
	return (tmp);
}
