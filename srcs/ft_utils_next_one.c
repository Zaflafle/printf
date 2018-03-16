/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_next_one.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 05:20:44 by macuguen          #+#    #+#             */
/*   Updated: 2018/02/27 17:00:26 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

void	ft_dell_zero(char *tmp)
{
	int i;

	i = 0;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == '0')
			tmp[i] = ' ';
		i++;
	}
}

int		ft_base(t_printf *list)
{
	if (list->conv_d == 1)
		return (10);
	if (list->conv_i == 1)
		return (10);
	if (list->conv_o == 1)
		return (8);
	if (list->conv_u == 1)
		return (10);
	if (list->conv_p == 1)
		return (16);
	if (list->conv_X == 1)
		return (16);
	if (list->conv_U == 1)
		return (10);
	if (list->conv_O == 1)
		return (8);
	if (list->conv_x == 1)
		return (16);
	return (0);
}
