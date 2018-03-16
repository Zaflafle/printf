/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 06:19:14 by macuguen          #+#    #+#             */
/*   Updated: 2018/02/23 02:19:27 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int    ft_structur_conv(t_printf *list)
{
	//%D ??
	if (list->conv_d == 1)
		return (1);
	if (list->conv_i == 1)
		return (2);
	if (list->conv_o == 1)
		return (3);
	if (list->conv_u == 1)
		return (4);
	if (list->conv_s == 1)
		return (5);
	if (list->conv_c == 1)
		return (6);
	if (list->conv_p == 1)
		return (7);
	if (list->conv_X == 1)
		return (8);
	if (list->conv_U == 1)
		return (9);
	if (list->conv_O == 1)
		return (10);
	if (list->conv_S == 1)
		return (11);
	if (list->conv_C == 1)
		return (12);
	if (list->conv_x == 1)
		return (13);
	return (0);
}

int    ft_printf(const char *format, ...)
{
	int i;
	int baladur;

	i = 0;
	baladur = 0;
	t_printf *list;
	va_list args;
	list = (t_printf*)ft_memalloc(sizeof(t_printf));
	va_start (args,format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i]);
			baladur++;
		}
		if ((format[i] == '%' && format[i + 1] != '\0') || (format[i] == '%' && format[i + 2] != '\0' && format[i + 2] != '\n'))
		{
			ft_memset(list, 0,sizeof(t_printf));
			while (format[i] != 'd' || format[i] != 'i' || format[i] != 'o' ||
					format[i] != 'u' || format[i] != 'x' || format[i] != 's' || format[i] != 'c' ||
					format[i] != 'p' || format[i] != 'X' || format[i] != 'U' || format[i] != 'O' ||
					format[i] != 'S' || format[i] != 'C' || format[i] != '%')
			{
				if (format[i] == '%' && format[i + 1] != '\0')
				{
					i++;
					list->conv_prct = 1;
				}
				if (format[i] == '%' && format[i - 1] == '%')
					list->dbl_prct = 1;
				if (format[i] == '+')
					ft_flag_parce((char*)format, i, list);
				if ((format[i - 1] == '%' && format[i] == '#') || (format[i - 1] == '%' && format[i] == ' ' )||
						(format[i - 1] == '%' && format[i] == '+') || (format[i - 2] == '%' && format[i] == '+') || 
						(format[i - 1] == '%' && format[i] == '-') || (format[i - 1] == '%' && format[i] == '0') || 
						(format[i - 2] == '%' && format[i] == '-') || (format[i - 2] == '%' && format[i - 1] == '#' && format[i] == '0') ||
						(format[i - 2] == '%' && format[i] == '#') || (format[i] == '+'))
				{
					ft_flag_parce((char*)format, i, list);
				}
				else if (ft_isdigit(format[i]) == 1 )
				{
					list->champ = 1;
					list->taille_cham = ft_taille_cham((char*)format, &i, list);
				}
				if ((format[i] == '*' && format[i - 1] == '%') || (format[i] == '*' && format[i - 1] == '0') ||
						(format[i] == '*' && format[i - 1] == '-' && format[i - 2] == '%') || 
						(format[i] == '*' && format[i - 1] == '-' && format[i - 3] == '%'))
				{
					list->champ = 1;
					list->chetoile = 1;
				}
				if (format[i] == '.')
				{
					list->point = 1;

					if (format[i + 1] != '*')
					{
						i++;
						list->precision = ft_taille_precision((char*)format, &i, list);
					}
					else
						list->pretoile = 1;
				}
				if (format[i] == 'j' || format[i] == 'z' || format[i] == 'h' ||
						format[i] == 'l')
				{
					if (format[i] == 'h' && format[i + 1] == 'h' )
						list->flag_hh = 1;
					if (format[i] == 'l' && format[i + 1] == 'l' )
						list->flag_ll = 1;                    
					if (format[i] == 'h' && format[i + 1] != 'h')
						list->flag_h = 1;                    
					if (format[i] == 'l' && format[i + 1] != 'l')
						list->flag_l = 1;                    
					if (format[i] == 'j')
						list->flag_j = 1;                    
					if (format[i] == 'z')
						list->flag_z = 1;                    
				}
				if (format[i] == 'd' || format[i] == 'i' || format[i] == 'o' ||
						format[i] == 'u' || format[i] == 'x' || format[i] == 's' || format[i] == 'c' ||
						format[i] == 'p' || format[i] == 'X' || format[i] == 'U' || format[i] == 'O' ||
						format[i] == 'S' || format[i] == 'C' || format[i] == '%')
				{
					if (format[i] == 'd')
						list->conv_d = 1;
					if (format[i] == 'i')
						list->conv_i = 1;
					if (format[i] == 'o')
						list->conv_o = 1;
					if (format[i] == 'u')
						list->conv_u = 1;
					if (format[i] == 'x')
						list->conv_x = 1;
					if (format[i] == 's')
						list->conv_s = 1;
					if (format[i] == 'c')
						list->conv_c = 1;
					if (format[i] == 'p')
						list->conv_p = 1;
					if (format[i] == 'X')
						list->conv_X = 1;
					if (format[i] == 'U')
						list->conv_U = 1;
					if (format[i] == 'O')
						list->conv_O = 1;
					if (format[i] == 'S')
						list->conv_S = 1;
					if (format[i] == 'C')
						list->conv_C = 1;
					break;
				}
				i++;
			}
		}
		if (ft_structur_conv(list) == 1 || ft_structur_conv(list) == 2) //%d %i
		{
			/*int u;
			char *tmp = NULL; //arranger le tmp en list->str
			u = 0;
			if (list->pretoile != 1 && list->chetoile != 1)
			{
				ft_flag_cast(args, list);
				if (ft_atoi(list->str) < 0)
					u = 1;
				else if (ft_atoi(list->str) == 0)
					u = 2;
				if (list->point == 1)
				{
					tmp = ft_app_taille_precipour_d(list,u);
					if (ft_atoi(list->str) == 0 && list->zero != 1)
						tmp[0] = ' ';
					list->str = ft_strdup(tmp);
					ft_strdel(&tmp);
				}
				if (list->moins == 1)
					tmp = ft_app_taille_cham_moins(list);
				else
				{
					tmp = ft_app_taille_cham_d(list);
				}
				if (list->zero == 1 && u == 1)
				{
					if (list->plus == 1)
						list->plus = 0;
					ft_neg_champ(tmp);
				}
				if (list->plus == 1 && ft_atoi(list->str) >= 0 && list->zero != 1 && list->point != 1)
				{
					ft_putchar('+');
					baladur = baladur + 1;
				}
				else if (list->plus == 1 && ft_atoi(list->str) >= 0 && list->zero != 1 && list->point == 1)
				{
					ft_plus_preci(tmp);
					if (list->moins == 1)
					{
						ft_putchar('+');
						baladur = baladur + 1;
					}
				}                
				if (list->plus == 1 &&  list->zero == 1 && list->champ == 1)
					ft_plus_champ(tmp);
				else if (list->zero == 1 && list->plus == 1)
					tmp[0] = '+';
				else if (list->aq_aq == 1 && list->plus != 1)
				{

					if (tmp[0] != '-' && list->champ == 0)
					{
						ft_putchar(' ');
						baladur = baladur + 1;
					}       
				}
				if (list->precision != 0 && list->zero == 1)
					ft_preci_zero_d(tmp,list,u);
				if (list->point == 1 && u == 1  && list->champ == 0)
				{
					ft_putchar('-');
					baladur = baladur + 1;
				}
				if (list->point == 1 && u == 2 && list->precision == 0 && list->champ == 0)
					baladur = baladur + 0;
				else
				{
					baladur = baladur + ft_strlen(tmp);
					ft_putstr(tmp);
				}
				free(list->str);
				free(tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
			else if (list->pretoile == 1 || list->chetoile == 1)
			{
				if (list->chetoile == 1)
					list->taille_cham = va_arg(args, int);
				if (list->point == 1)
				{
					if (list->pretoile == 1)
						list->precision = va_arg(args, int);
				}
				ft_flag_cast(args, list);
				if (ft_atoi(list->str) < 0)
					u = 1;
				else if (ft_atoi(list->str) == 0)
					u = 2;
				if (list->point == 1)
				{
					tmp = ft_app_taille_precipour_d(list,u);
					if (ft_atoi(list->str) == 0 && list->zero != 1)
						tmp[0] = ' ';
					list->str = ft_strdup(tmp);
					ft_strdel(&tmp);
				}
				if (list->moins == 1)
					tmp = ft_app_taille_cham_moins(list);
				else
					tmp = ft_app_taille_cham_d(list);
				if (list->zero == 1 && u == 1)
				{
					if (list->plus == 1)
						list->plus = 0;
					ft_neg_champ(tmp);
				}
				if (list->plus == 1 && ft_atoi(list->str) >= 0 && list->zero != 1 && list->point != 1)
				{
					ft_putchar('+');
					baladur = baladur + 1;
				}
				else if (list->plus == 1 && ft_atoi(list->str) >= 0 && list->zero != 1 && list->point == 1)
				{
					ft_plus_preci(tmp);
					if (list->moins == 1)
					{
						ft_putchar('+');
						baladur = baladur + 1;
					}
				}                
				if (list->plus == 1 &&  list->zero == 1 && list->champ == 1)
					ft_plus_champ(tmp);
				else if (list->zero == 1 && list->plus == 1)
					tmp[0] = '+';
				else if (list->aq_aq == 1 && list->plus != 1)
				{

					if (tmp[0] != '-' && list->champ == 0)
					{
						ft_putchar(' ');
						baladur = baladur + 1;
					}       
				}
				if (list->precision != 0 && list->zero == 1)
					ft_preci_zero_d(tmp,list,u);
				if (list->point == 1 && u == 1  && list->champ == 0)
				{
					ft_putchar('-');
					baladur = baladur + 1;
				}
				if (list->point == 1 && u == 2 && list->precision == 0 && list->champ == 0)
					baladur = baladur + 0;
				else
				{
					baladur = baladur + ft_strlen(tmp);
					ft_putstr(tmp);
				}
				free(list->str);
				free(tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}*/
            baladur = baladur + ft_instruction_d_i(&args, format, list);
		}
		/*else if (ft_structur_conv(list) == 3)                   //%o
		{
			char *tmp; //arranger le tmp en list->str
			int    u;

			u = 0;
			if (list->pretoile != 1 && list->chetoile != 1)
			{
				ft_flag_cast(args, list);
				if (ft_atoi(list->str) == 0)
					u = 2;
				if (list->point == 1)
				{
					tmp = ft_app_taille_precipour_d(list,u);
					list->str = ft_strdup(tmp);
					ft_strdel(&tmp);
				}
				if (list->moins == 1)
					tmp = ft_app_taille_cham_moins_o(list);
				else
					tmp = ft_app_taille_cham(list);
				if (list->plus == 1)
				{
					ft_putchar('+');
					baladur = baladur + 1;
				}
				else if (list->aq_aq == 1)
				{
					if (tmp[0] != '-')
						ft_putchar(' ');
					baladur = baladur + 1;
				}
				if (list->point == 1 && u == 2 && list->precision == 0 && list->champ == 1 && list->dieze == 0)
					ft_dell_zero(tmp);
				if (list->point == 1 && u == 2 && list->precision == 0 && list->champ == 0 && list->dieze == 0)
					baladur = baladur + 0;
				else
				{
					baladur = baladur + ft_strlen(tmp);
					ft_putstr(tmp);
				}
				free(list->str);
				free(tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
			else if (list->pretoile == 1 || list->chetoile == 1)
			{
				if (list->chetoile == 1)
					list->taille_cham = va_arg(args, int);
				ft_flag_cast(args, list);
				if (ft_atoi(list->str) == 0)
					u = 2;
				if (list->point == 1)
				{
					tmp = ft_app_taille_precipour_d(list,u);
					list->str = ft_strdup(tmp);
					ft_strdel(&tmp);
				}
				if (list->moins == 1)
					tmp = ft_app_taille_cham_moins_o(list);
				else
					tmp = ft_app_taille_cham(list);
				if (list->plus == 1)
				{
					ft_putchar('+');
					baladur = baladur + 1;
				}
				else if (list->aq_aq == 1)
				{
					if (tmp[0] != '-')
						ft_putchar(' ');
					baladur = baladur + 1;
				}
				if (list->point == 1 && u == 2 && list->precision == 0 && list->champ == 1 && list->dieze == 0)
					ft_dell_zero(tmp);
				if (list->point == 1 && u == 2 && list->precision == 0 && list->champ == 0 && list->dieze == 0)
					baladur = baladur + 0;
				else
				{
					baladur = baladur + ft_strlen(tmp);
					ft_putstr(tmp);
				}
				free(list->str);
				free(tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
		}
		else if (ft_structur_conv(list) == 13)                          //%x
		{
			char *tmp; //arranger le tmp en list->str
            int u;
            
			u = 0;
			if (list->pretoile != 1 && list->chetoile != 1)
			{
				ft_flag_cast(args, list);
				if (ft_atoi(list->str) == 0)
					u = 2;
				if (list->point == 1)
				{
					tmp = ft_app_taille_precipour_d(list,u);
					if (ft_atoi(list->str) == 0)
						tmp[0] = ' ';
					list->str = ft_strdup(tmp);
					ft_strdel(&tmp);
				}
				if (list->moins == 1)
					tmp = ft_app_taille_cham_moins(list);
				else
					tmp = ft_app_taille_cham_d(list);
				if (list->plus == 1)
				{
					ft_putchar('+');
					baladur = baladur + 1;
				}
				else if (list->aq_aq == 1)
				{
					if (tmp[0] != '-')
						ft_putchar(' ');
					baladur = baladur + 1;
				}
				if (list->dieze == 1 && ft_atoi(tmp) != 0)
				{
					if (list->zero == 1 && list->champ == 1)
						ft_dieze_zero(tmp);
					else if (list->champ == 1 && list->moins != 1)
						ft_dieze_espace(tmp);
					else if (list->moins == 1)
						ft_dieze_moins(tmp);
					else
					{
						ft_putstr("0x");
						baladur = baladur + 2;
					}
				}
				if (list->point == 1 && u == 2 && list->precision == 0 && list->champ == 0)
					baladur = baladur + 0;
				else
				{
					baladur = baladur + ft_strlen(tmp);
					ft_putstr(tmp);
				}
				free(list->str);
				free(tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
			else if (list->pretoile == 1 || list->chetoile == 1)
			{
				if (list->chetoile == 1)
					list->taille_cham = va_arg(args, int);
				if (list->point == 1)
				{
					if (list->pretoile == 1)
					{
						list->precision = va_arg(args, int);
						//printf("||prci %d||\n",list->precision);
					}
				}
				ft_flag_cast(args, list);
				if (ft_atoi(list->str) == 0)
					u = 2;
				if (list->point == 1)
				{
					tmp = ft_app_taille_precipour_d(list,u);
					if (ft_atoi(list->str) == 0)
						tmp[0] = ' ';
					list->str = ft_strdup(tmp);
					ft_strdel(&tmp);
				}
				if (list->moins == 1)
					tmp = ft_app_taille_cham_moins(list);
				else
					tmp = ft_app_taille_cham_d(list);
				if (list->plus == 1)
				{
					ft_putchar('+');
					baladur = baladur + 1;
				}
				else if (list->aq_aq == 1)
				{
					if (tmp[0] != '-')
						ft_putchar(' ');
					baladur = baladur + 1;
				}
				if (list->dieze == 1 && ft_atoi(tmp) != 0)
				{
					if (list->zero == 1 && list->champ == 1)
						ft_dieze_zero(tmp);
					else if (list->champ == 1 && list->moins != 1)
						ft_dieze_espace(tmp);
					else if (list->moins == 1)
						ft_dieze_moins(tmp);
					else
					{
						ft_putstr("0x");
						baladur = baladur + 2;
					}
				}
				if (list->point == 1 && u == 2 && list->precision == 0 && list->champ == 0)
					baladur = baladur + 0;
				else
				{
					baladur = baladur + ft_strlen(tmp);
					ft_putstr(tmp);
				}
				free(list->str);
				free(tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
		}
		else if (ft_structur_conv(list) == 5)                           //%s
		{
			char *tmp; //arranger le tmp en list->str
			if (list->pretoile != 1 && list->chetoile != 1)
			{
				list->str = va_arg(args, char*); // modifier le putstr pour les structur
				if (list->str == NULL)
					list->null = 1;
				if (list->point == 1)
				{
					tmp = ft_app_precision(list);
					list->str = ft_strdup(tmp);
					ft_strdel(&tmp);
				}
				if (list->moins == 1)
					tmp = ft_app_taille_cham_moins(list);
				else
					tmp = ft_app_taille_cham(list);
				baladur = baladur + ft_strlen(tmp);
				if (list->null == 1)
				{
					ft_putstr("(null)");
					baladur = baladur + 6;
				}
				else
					ft_putstr(tmp);
				ft_strdel(&tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
			else if (list->pretoile == 1 || list->chetoile == 1)
			{
				if (list->champ == 1)
				{
					if (list->chetoile == 1)
						list->taille_cham = va_arg(args, int);
					if (list->point == 1)
					{
						if (list->pretoile == 1)
							list->precision = va_arg(args, int);
					}
				}
				list->str = va_arg(args, char*);
				if (list->str == NULL)
					list->null = 1;
				if (list->point == 1)
				{
					tmp = ft_app_precision(list);
					list->str = ft_strdup(tmp);
					ft_strdel(&tmp);
				}
				if (list->moins == 1)
					tmp = ft_app_taille_cham_moins(list);
				else
					tmp = ft_app_taille_cham(list);
				baladur = baladur + ft_strlen(tmp);
				if (list->null == 1)
				{
					ft_putstr("(null)");
					baladur = baladur + 6;
				}
				else
					ft_putstr(tmp);
				ft_strdel(&tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
		}
		else if (ft_structur_conv(list) == 8) // %X
		{
			char *tmp = NULL;
			if (list->pretoile != 1 && list->chetoile != 1)
			{
				ft_flag_cast(args, list);
				tmp = ft_app_taille_cham(list);
				ft_strupper(tmp);
				if (list->dieze == 1)
				{
					ft_putstr("0X");
					baladur = baladur + 2;
				}
				baladur = baladur + ft_strlen(tmp);
				ft_putstr(tmp);
				free(list->str);
				free(tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
			else if (list->pretoile == 1 || list->chetoile == 1)
			{
				if (list->chetoile == 1)
					list->taille_cham = va_arg(args, int);
				
				ft_flag_cast(args, list);
				ft_strupper(tmp);
				tmp = ft_app_taille_cham(list);
				if (list->dieze == 1)
				{
					ft_putstr("0X");
					baladur = baladur + 2;
				}
				baladur = baladur + ft_strlen(tmp);
				ft_putstr(tmp);
				free(list->str);
				free(tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
		}
		else if (ft_structur_conv(list) == 10) // %O
		{
            char *tmp;
            
			if (list->flag_l == 1)
			{
				list->flag_ll = 1;
				list->flag_l = 0;
			}
			else
				list->flag_l = 1;
			if (list->pretoile != 1 && list->chetoile != 1)
			{
				ft_flag_cast(args, list);
				tmp = ft_app_taille_cham(list);
				baladur = baladur + ft_strlen(tmp);
				ft_putstr(tmp);
				free(list->str);
				free(tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
			else if (list->pretoile == 1 || list->chetoile == 1)
			{
				if (list->chetoile == 1)
					list->taille_cham = va_arg(args, int);
				ft_flag_cast(args, list);
				tmp = ft_app_taille_cham(list);
				baladur = baladur + ft_strlen(tmp);
				ft_putstr(tmp);
				free(list->str);
				free(tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
		}
		else if (ft_structur_conv(list) == 7) // %p
		{
            char *tmp = NULL;
            
			if (list->pretoile != 1 && list->chetoile != 1)
			{
				ft_flag_cast(args, list);
				tmp = ft_app_taille_cham(list);
				if (list->dieze == 1)
				{
					ft_putstr("0x");
					baladur = baladur + 2;
				}
				baladur = baladur + ft_strlen(tmp);
				ft_putstr(tmp);
				free(list->str);
				free(tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
			else if (list->pretoile == 1 || list->chetoile == 1)
			{
				if (list->chetoile == 1)
					list->taille_cham = va_arg(args, int);
				ft_flag_cast(args, list);
				if (list->dieze == 1)
				{
					ft_putstr("0x");
					baladur = baladur + 2;
				}
				baladur = baladur + ft_strlen(tmp);
				ft_putstr(tmp);
				free(list->str);
				free(tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
		}
		else if (ft_structur_conv(list) == 12) // %C
		{
			if (list->pretoile != 1 && list->chetoile != 1)
			{
				list->w = va_arg(args, wchar_t);
				baladur = baladur + 1;
				ft_putchawr(list->w);
				ft_memset(list, 0,sizeof(t_printf));
			}
			else if (list->pretoile == 1 || list->chetoile == 1)
			  {
			//printf("LEPOTE\n");
			if (list->champ == 1)
			{
			if (list->chetoile == 1)
			{
			list->taille_cham = va_arg(args, int); //======= penser au champ zero sur cette fonction
			// printf("||tail %d||\n",list->taille_cham);
			}
			if (list->point == 1)
			{
			if (list->pretoile == 1)
			{
			list->precision = va_arg(args, int);
			//printf("||prci %d||\n",list->precision);
			}
			}
			}
			list->str = va_arg(args, char*);
			if (list->point == 1)
			{
			tmp = ft_app_precision(list);
			//printf("||1str == %s||\n",tmp);                            

			list->str = ft_strdup(tmp);
			ft_strdel(&tmp);
			}
			tmp = ft_app_taille_cham(list);
			ft_putstr(tmp);
			ft_strdel(&tmp);
			ft_memset(list, 0,sizeof(t_printf));
			}*/
		/*}
		else if (ft_structur_conv(list) == 11)                           //%S
		{
			wchar_t *tmp;
            int p = 0;
            
			if (list->pretoile != 1 && list->chetoile != 1)
			{
				list->unico = va_arg(args, wchar_t*); // modifier le putstr pour les structur
				if (list->point == 1)
				{
					tmp = ft_app_precision_wchar(list);
					list->unico = ft_strdup_wchar(tmp);
					ft_strdel_w(&tmp);
				}
				tmp = ft_app_taille_cham_w(list);
				baladur = baladur + ft_strlen_w(tmp);
				while (tmp[p] != '\0')
					ft_putchawr(tmp[p++]);
				ft_strdel_w(&tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
			else if (list->pretoile == 1 || list->chetoile == 1)
			{
				if (list->champ == 1)
				{
					if (list->chetoile == 1)
						list->taille_cham = va_arg(args, int);
					if (list->point == 1)
					{
						if (list->pretoile == 1)
							list->precision = va_arg(args, int);
					}
				}
				list->unico = va_arg(args, wchar_t*);
				if (list->point == 1)
				{
					tmp = ft_app_precision_wchar(list);
					list->unico = ft_strdup_wchar(tmp);
					ft_strdel_w(&tmp);
				}
				tmp = ft_app_taille_cham_w(list);
				baladur = baladur + ft_strlen_w(tmp);
				while (tmp[p] != '\0')
				{
					ft_putchawr(tmp[p++]);
				}
				ft_strdel_w(&tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
		}
		else if (ft_structur_conv(list) == 6) // %c
		{
			char *tmp;
			if (list->pretoile != 1 && list->chetoile != 1)
			{
				list->c = (char)va_arg(args, int); // modifier le putstr pour les structur
				if (list->c == '\0')
					list->null = 1;
				if (list->moins == 1)
				{
					tmp = ft_app_taille_cham_moins_c(list);
					baladur = baladur + list->taille_cham;
				}
				else
				{
					tmp = ft_app_taille_cham_c(list);
					baladur = baladur + list->taille_cham;
				}

				if (list->null == 1 && list->champ == 1)
					ft_nputstr(tmp,baladur);
				else if (list->champ == 0)
				{
					ft_putchar(list->c);
					baladur = baladur + 1;
				}
				else
					ft_putstr(tmp);
				ft_strdel(&tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
			else if (list->pretoile == 1 || list->chetoile == 1)
			{
				if (list->champ == 1)
				{
					if (list->chetoile == 1)
						list->taille_cham = va_arg(args, int);
				}
				list->c = (char)va_arg(args, int); // modifier le putstr pour les structur
				if (list->c == '\0')
					list->null = 1;
				if (list->moins == 1)
				{
					tmp = ft_app_taille_cham_moins_c(list);
					baladur = baladur + list->taille_cham;
				}
				else
				{
					tmp = ft_app_taille_cham_c(list);
					baladur = baladur + list->taille_cham;
				}

				if (list->null == 1 && list->champ == 1)
					ft_nputstr(tmp,baladur);
				else if (list->champ == 0)
				{
					ft_putchar(list->c);
					baladur = baladur + 1;
				}
				else
					ft_putstr(tmp);
				ft_strdel(&tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
		}
		else if (ft_structur_conv(list) == 4)                   //%u
		{
			int u;
			char *tmp; //arranger le tmp en list->str
			u = 0;
			if (list->pretoile != 1 && list->chetoile != 1)
			{
				ft_flag_cast(args, list);
				if (list->point == 1)
				{
					tmp = ft_app_taille_precipour_d(list,u);
					list->str = ft_strdup(tmp);
					ft_strdel(&tmp);
				}
				if (list->moins == 1)
					tmp = ft_app_taille_cham_moins(list);
				else
					tmp = ft_app_taille_cham(list);
				baladur = baladur + ft_strlen(tmp);
				ft_putstr(tmp);
				free(list->str);
				free(tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
			else if (list->pretoile == 1 || list->chetoile == 1)
			{
				if (list->chetoile == 1)
					list->taille_cham = va_arg(args, int);
				if (list->point == 1)
				{
					if (list->pretoile == 1)
						list->precision = va_arg(args, int);
				}
				ft_flag_cast(args, list);
				if (list->point == 1)
				{
					tmp = ft_app_taille_precipour_d(list,u);
					list->str = ft_strdup(tmp);
					ft_strdel(&tmp);
				}
				if (list->moins == 1)
					tmp = ft_app_taille_cham_moins(list);
				else
					tmp = ft_app_taille_cham(list);
				baladur = baladur + ft_strlen(tmp);
				ft_putstr(tmp);
				free(list->str);
				free(tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
		}
		else if (ft_structur_conv(list) == 9) //%U
		{
			char *tmp; //arranger le tmp en list->str
			if (list->flag_l == 1)
			{
				list->flag_ll = 1;
				list->flag_l = 0;
			}
			else
				list->flag_l = 1;
			if (list->pretoile != 1 && list->chetoile != 1)
			{
				int u;

				u = 0;
				ft_flag_cast(args, list);
				if (list->point == 1)
				{
					tmp = ft_app_taille_precipour_d(list,u);
					list->str = ft_strdup(tmp);
					ft_strdel(&tmp);
				}
				if (list->moins == 1)
					tmp = ft_app_taille_cham_moins(list);
				else
					tmp = ft_app_taille_cham(list);
				if (list->plus == 1)
				{
					ft_putchar('+');
					baladur = baladur + 1;
				}
				else if (list->aq_aq == 1)
				{
					if (tmp[0] != '-')
					{
						ft_putchar(' ');
						baladur = baladur + 1;
					}
				}
				baladur = baladur + ft_strlen(tmp);
				ft_putstr(tmp);
				free(list->str);
				free(tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
			else if (list->pretoile == 1 || list->chetoile == 1)
			{
				int u;

				u = 0;
				if (list->chetoile == 1)
					list->taille_cham = va_arg(args, int);
				if (list->point == 1)
				{
					if (list->pretoile == 1)
						list->precision = va_arg(args, int);
				}
				ft_flag_cast(args, list);
				if (list->point == 1)
				{
					tmp = ft_app_taille_precipour_d(list,u);
					list->str = ft_strdup(tmp);
					ft_strdel(&tmp);
				}
				if (list->moins == 1)
					tmp = ft_app_taille_cham_moins(list);
				else
					tmp = ft_app_taille_cham(list);
				if (list->plus == 1)
				{
					ft_putchar('+');
					baladur = baladur + 1;
				}
				else if (list->aq_aq == 1)
				{
					if (tmp[0] != '-')
					{
						ft_putchar(' ');
						baladur = baladur + 1;
					}
				}
				baladur = baladur + ft_strlen(tmp);
				ft_putstr(tmp);
				free(list->str);
				free(tmp);
				ft_memset(list, 0,sizeof(t_printf));
			}
		}
		else if (list->conv_prct == 1)                   //%%
		{
			char *tmp;

			list->c = '%';
			if (list->moins == 1)
				tmp = ft_app_taille_cham_moins_c(list);
			else
				tmp = ft_app_taille_cham_c(list);
			baladur = baladur + ft_strlen(tmp);
			ft_putstr(tmp);
			free(tmp);
			ft_memset(list, 0,sizeof(t_printf));
		}*/
		i++;
	}
	va_end(args);
	return (baladur);
}
