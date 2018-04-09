/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 05:04:08 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/09 18:55:36 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

char	*ft_dieze_moins(char *tmp)
{
	unsigned int		i;
	int					y;
	char				*tg;

	tg = ft_memalloc(ft_strlen(tmp));
	i = 0;
	tg[0] = '0';
	tg[1] = 'x';
	i = 2;
	y = 0;
	while (i < ft_strlen(tmp))
	{
		tg[i] = tmp[y];
		y++;
		i++;
	}
	free(tmp);
	return (tg);
}

char	*ft_neg_champ(char *tmp)
{
	int i;

	i = 1;
	tmp[0] = '-';
	while (tmp[i] != '\0')
	{
		if (tmp[i] == '-')
			tmp[i++] = '0';
		i++;
	}
	return (tmp);
}

char	*ft_plus_champ(char *tmp)
{
	int i;

	i = 1;
	tmp[0] = '+';
	while (tmp[i] != '\0')
	{
		if (tmp[i] == '+')
			tmp[i++] = '0';
		i++;
	}
	return (tmp);
}

int		ft_flag_parce(char *format, int *i, t_printf *list)
{
	if (format[*i] == '#')
		list->dieze = 1;
	else if (format[*i] == ' ')
		list->aq_aq = 1;
	else if (format[*i] == '+')
		list->plus = 1;
	else if (format[*i] == '-')
		list->moins = 1;
	else if (format[*i] == '0')
		list->zero = 1;
	return (0);
}
