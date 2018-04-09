/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_next.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 05:07:53 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/09 20:42:01 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

void	ft_preci_zero_d(char *tmp, t_printf *list, int u)
{
	int i;
	int j;

	j = list->precision;
	i = ft_strlen(tmp) - 1;
	while (j > 0)
	{
		j--;
		i--;
	}
	if (u == 1)
	{
		tmp[i] = '-';
		i--;
	}
	if (list->precision < (int)ft_strlen(list->str) && list->point == 1)
		i--;
	while (i >= 0)
	{
		tmp[i] = ' ';
		i--;
	}
}

char	*ft_dieze_espace(char *tmp)
{
	int i;

	i = 0;
	while (ft_isdigit(tmp[i]) != 1 && ft_isalpha(tmp[i]) != 1)
	{
		i++;
	}
	i = i - 1;
	tmp[i] = 'x';
	i = i - 1;
	tmp[i] = '0';
	return (tmp);
}

char	*ft_plus_preci(char *tmp)
{
	int i;

	i = 0;
	while (ft_isdigit(tmp[i]) != 1 && ft_isalpha(tmp[i]) != 1)
		i++;
	if (i != 0)
		i = i - 1;
	tmp[i] = '+';
	return (tmp);
}

char	*ft_dieze_zero(char *tmp)
{
	int i;

	i = 0;
	tmp[i] = '0';
	i = i + 1;
	tmp[i] = 'x';
	return (tmp);
}
