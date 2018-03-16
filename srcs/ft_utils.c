/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 05:04:08 by macuguen          #+#    #+#             */
/*   Updated: 2018/02/28 14:07:01 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

char	*ft_dieze_moins(char *tmp)
{
	int		i;
	char	c;
	char	t;

	i = 0;
	c = tmp[i];
	t = tmp[i + 1];
	tmp[i] = '0';
	i = i + 1;
	tmp[i] = 'x';
	i = i + 1;
	tmp[i] = c;
	i = i + 1;
	tmp[i] = t;
	return (tmp);
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
