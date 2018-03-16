/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app_cham_next.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:46:19 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/05 03:30:50 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

char		*ft_app_taille_cham(t_printf *list)
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
		if (list->dieze == 1)
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

wchar_t		*ft_app_taille_cham_w(t_printf *list)
{
	int		k;
	int		i;
	int		j;
	int		t;
	wchar_t	*tmp;

	t = 0;
	i = 0;
	j = ft_strlen_w(list->unico);
	k = list->taille_cham;
	if (j > k)
		t = j;
	else
		t = k;
	if (!(tmp = (wchar_t*)malloc((sizeof(wchar_t) * (t + 1)))))
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
		while (i < list->taille_cham)
		{
			tmp[i] = list->unico[k];
			i++;
			k++;
		}
	}
	else
	{
		k = 0;
		while (i < j)
		{
			tmp[i] = list->unico[k];
			i++;
			k++;
		}
	}
	return (tmp);
}

wchar_t		*ft_app_taille_cham_moins_w(t_printf *list)
{
	int		k;
	int		i;
	int		j;
	int		t;
	wchar_t	*tmp;

	t = 0;
	i = 0;
	j = ft_strlen_w(list->unico);
	k = list->taille_cham;
	if (list->plus == 1)
		k = list->taille_cham - 1;
	if (j > k)
		t = j;
	else
		t = k;
	if (!(tmp = (wchar_t*)malloc((sizeof(wchar_t) * (t + 1)))))
		return (0);
	tmp[t] = '\0';
	k = 0;
	if (j < t)
	{
		while (i < j)
		{
			tmp[i] = list->unico[k];
			i++;
			k++;
		}
		k = list->taille_cham;
		while (i < k)
		{
			tmp[i]= '1';
			i++;
		}
		
	}
	else
	{
		k = 0;
		while (i < j)
		{
			tmp[i] = list->unico[k];
			i++;
			k++;
		}
	}
	return (tmp);
}