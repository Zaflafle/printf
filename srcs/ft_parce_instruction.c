/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parce_instruction.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 05:05:04 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/08 21:54:40 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static void		ft_flag_parce_choice_end(t_printf *list, char *format, int *i)
{
	if (format[*i] == 'd')
		list->conv_d = 1;
	else if (format[*i] == 'D')
	 	list->conv_d = 1;
	else if (format[*i] == 'i')
	 	list->conv_d = 1;
	else if (format[*i] == 'o')
	 	list->conv_o = 1;
	else if (format[*i] == 'u')
		list->conv_u = 1;
	else if (format[*i] == 'x')
		list->conv_x = 1;
	else if (format[*i] == 's')
	 	list->conv_s = 1;
	else if (format[*i] == 'c')
	 	list->conv_c = 1;
	else if (format[*i] == 'p')
		list->conv_p = 1;
	else if (format[*i] == 'X')
		list->conv_X = 1;
	else if (format[*i] == 'U')
	 	list->conv_U = 1;
	else if (format[*i] == 'O')
	 	list->conv_O = 1;
	else if (format[*i] == 'S')
	 	list->conv_S = 1;
	else if (format[*i] == 'C')
	 	list->conv_C = 1;
	else if (format[*i] == '%')
	{
		list->spl = 1;
	}		
}

static void		ft_flag_parce_choice_two(t_printf *list, char *format, int *i)
{
	if (format[*i] == 'j' || format[*i] == 'z' || format[*i] == 'h' ||
	format[*i] == 'l')
	{
		if (format[*i] == 'h' && format[*i + 1] == 'h')
			list->flag_hh = 1;
		if (format[*i] == 'l' && format[*i + 1] == 'l')
			list->flag_ll = 1;
		if (format[*i] == 'h' && format[*i + 1] != 'h')
			list->flag_h = 1;
		if (format[*i] == 'l' && format[*i + 1] != 'l')
			list->flag_l = 1;
		if (format[*i] == 'j')
			list->flag_j = 1;
		if (format[*i] == 'z')
			list->flag_z = 1;
	}
}

static void		ft_flag_parce_choice_one(t_printf *list, char *format, int *i)
{
	if ((format[*i] == '*' && format[*i - 1] == '%') ||
	(format[*i] == '*' && format[*i - 1] == '0') ||
	(format[*i] == '*' && format[*i - 1] == '-' && format[*i - 2] == '%') ||
	(format[*i] == '*' && format[*i - 1] == '-' && format[*i - 3] == '%'))
	{
		list->champ = 1;
		list->chetoile = 1;
	}
	if (format[*i] == '.')
	{
		list->point = 1;
		if (format[*i + 1] != '*')
		{
			(*i)++;
			list->precision = ft_taille_precision((char*)format, i, list);
		}
		else
			list->pretoile = 1;
	}
}

static void		ft_flag_parce_choice(t_printf *list, char *format, int *i)
{
	
	if (format[*i] == '%' && format[*i - 1] == '%')
	{
		list->dbl_prct = 1;
	}
	if ((format[*i - 1] == '%' && format[*i] == '#') ||
			(format[*i - 1] == '%' && format[*i] == ' ') ||
			(format[*i - 1] == '%' && format[*i] == '+') ||
			(format[*i - 2] == '%' && format[*i] == '+') ||
			(format[*i - 1] == '%' && format[*i] == '-') ||
			(format[*i - 1] == '%' && format[*i] == '0') ||
			(format[*i - 2] == '%' && format[*i] == '0') ||
			(format[*i - 2] == '%' && format[*i] == '-') ||
			(format[*i - 2] == '%' && format[*i - 1] == '#' && format[*i] == '0') ||
			(format[*i - 2] == '%' && format[*i] == '#') || (format[*i] == '+'))
		ft_flag_parce((char*)format, i, list);
	else if (ft_isdigit(format[*i]) == 1)
	{
		list->champ = 1;
		list->taille_cham = ft_taille_cham((char*)format, i, list);
	}
}

int				ft_parce_instruction(t_printf *list, char *format, int *i)
{
	int ret;

	ret = 0;
	ft_memset(list, 0, sizeof(t_printf));
	if (format[*i] == '%')
		(*i)++;
	while (format[*i] != 'd' || format[*i] != 'i' || format[*i] != 'o' ||
			format[*i] != 'u' || format[*i] != 'x' || format[*i] != 's' ||
			format[*i] != 'c' || format[*i] != 'p' || format[*i] != 'X' ||
			format[*i] != 'U' || format[*i] != 'O' || format[*i] != 'S' ||
			format[*i] != 'C' || format[*i] != '%' || format[*i] == 'D')
	{
		ft_flag_parce_choice(list, format, i);
		ft_flag_parce_choice_one(list, format, i);
		ft_flag_parce_choice_two(list, format, i);
		if (format[*i] == 'd' || format[*i] == 'i' || format[*i] == 'o' ||
				format[*i] == 'u' || format[*i] == 'x' || format[*i] == 's' ||
				format[*i] == 'c' || format[*i] == 'p' || format[*i] == 'X' ||
				format[*i] == 'U' || format[*i] == 'O' || format[*i] == 'D' ||
				format[*i] == 'S' || format[*i] == 'C' || format[*i] == '%')
		{
			if (format[*i] == '%')
			{
				list->conv_prct = list->conv_prct + 1;
			}
			ft_flag_parce_choice_end(list, format, i);
			break ;
		}
		if (format[*i] == '\0')
		 	break ;
		(*i)++;
	}
	return (ret);
}
