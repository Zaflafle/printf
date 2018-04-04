/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_next_one.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 05:20:44 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/03 23:33:21 by macuguen         ###   ########.fr       */
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

int		ft_for_the_norm_bis(char *format, int *i)
{
	if (format[*i] == 'd' || format[*i] == 'i' || format[*i] == 'o' ||
		format[*i] == 'u' || format[*i] == 'x' || format[*i] == 's' ||
		format[*i] == 'c' || format[*i] == 'p' || format[*i] == 'X' ||
		format[*i] == 'U' || format[*i] == 'O' || format[*i] == 'S' ||
		format[*i] == 'C' || format[*i] == '%' || format[*i] == 'D')
		return (1);
	else
		return (0);
}

int		ft_for_the_norm(char *format, int *i)
{
	if (format[*i] != 'd' || format[*i] != 'i' || format[*i] != 'o' ||
		format[*i] != 'u' || format[*i] != 'x' || format[*i] != 's' ||
		format[*i] != 'c' || format[*i] != 'p' || format[*i] != 'X' ||
		format[*i] != 'U' || format[*i] != 'O' || format[*i] != 'S' ||
		format[*i] != 'C' || format[*i] != '%' || format[*i] != 'D')
		return (1);
	else
		return (0);
}

void	ft_flag_parce_choice_end_bis(t_printf *list, char *format, int *i)
{
	if (format[*i] == 'o')
		list->conv_o = 1;
	else if (format[*i] == 'O')
		list->conv_O = 1;
}
