/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_app_cham_next_one.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:56:11 by macuguen          #+#    #+#             */
/*   Updated: 2018/02/28 15:39:37 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

char	*ft_app_taille_cham_moins_c(t_printf *list)
{
	int		k;
	int		i;
	int		j;
	int		t;
	char	*tmp;

	t = 0;
	i = 1;
	j = 1;
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
	tmp[0] = list->c;
	if (j < t)
	{
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
