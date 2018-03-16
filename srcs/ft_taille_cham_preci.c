/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_taille_cham_preci.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 04:59:47 by macuguen          #+#    #+#             */
/*   Updated: 2018/02/28 16:54:19 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

int		ft_taille_cham(char *format, int *i, t_printf *list)
{
	int		j;
	int		k;
	int		t;
	char	*tmp;

	j = *i;
	k = 0;
	while (ft_isdigit(format[*i]) == 1)
		(*i)++;
	if (list->plus == 1)
		k = 0;
	t = (*i - j);
	if (!(tmp = (char*)ft_memalloc(sizeof(*tmp) * (t + 1 - k))))
		return (0);
	while (k < t)
	{
		tmp[k] = format[j];
		k++;
		j++;
	}
	j = ft_atoi(tmp);
	free(tmp);
	return (j);
}

int		ft_taille_precision(char *format, int *i, t_printf *list)
{
	int		j;
	int		k;
	int		t;
	char	*tmp;

	j = *i;
	k = 0;
	t = 0;
	while (ft_isdigit(format[*i]) == 1)
		(*i)++;
	if (list->moins == 1)
		k = 0;
	t = (*i - j) + k;
	if (!(tmp = (char*)ft_memalloc(sizeof(*tmp) * (t + 1))))
		return (0);
	if (k == 1)
		tmp[0] = '-';
	while (k < t)
		tmp[k++] = format[j++];
	j = ft_atoi(tmp);
	free(tmp);
	return (j);
}
