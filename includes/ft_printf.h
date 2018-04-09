/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 03:59:26 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/09 20:24:06 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/includes/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <wchar.h>
# include <locale.h>
# include <limits.h>

typedef struct  s_printf
{
	int					entier;
	int					null;
	int					dieze;
	int					aq_aq;
	int					plus;
	int					moins;
	int					zero;
	int					point;
	int					champ;
	int					taille_cham;
	int					precision;
	int					pretoile;
	int					chetoile;
	int					flag_h;
	int					flag_hh;
	int					flag_ll;
	int					flag_l;
	int					flag_j;
	int					flag_z;

	unsigned long long	cast_flag;
	long				tg;

	int					conv_d;
	int					conv_i;
	int					conv_o;
	int					conv_u;
	int					conv_s;
	int					conv_c;
	int					conv_p;
	int					conv_X;
	int					conv_U;
	int					conv_O;
	int					conv_S;
	int					conv_C;
	int					conv_bd;
	int					conv_x;
	int					conv_prct;

	int					dbl_prct;
	int					spl;

	wint_t				w;
	wchar_t				*unico;

	char				c;
	char				*str;
	struct s_printf		*next;
}						t_printf;

typedef struct s_count
{
	int		u;
	int		k;
	int		i;
	int		j;
	int		t;
	int		ret;
	int		p;
}			t_count;

int			ft_printf(const char *format, ...);
char		ft_putchawr(wchar_t c);
char		*ft_convert(long long int n, int base, char *str, int i);
char		*ft_itoa_base(long long int n, int base);
int    		ft_pow(unsigned long long v, unsigned int base);
char   		*ft_itoa_base_p(unsigned long long value, unsigned int base);
char		*ft_itoa_base_long(long long n, int base);
char		*ft_convert_long(long long n, int base, char *str, int i);
wchar_t		*ft_app_precision_wchar(t_printf *list);
char		*ft_app_precision(t_printf *list);
char		*ft_app_taille_precipour_d(t_printf *list,int *u);
char		*ft_app_precision(t_printf *list);
wchar_t		*ft_app_precision_wchar(t_printf *list);
char		*ft_app_taille_cham_c(t_printf *list);
char		*ft_app_taille_cham_d(t_printf *list);
wchar_t		*ft_app_taille_cham_w(t_printf *list);
char		*ft_app_taille_cham(t_printf *list);
char		*ft_app_taille_cham_moins(t_printf *list);
char		*ft_app_taille_cham_moins_o(t_printf *list, int *u);
char		*ft_app_taille_cham_moins_c(t_printf *list);
int			ft_taille_precision(char *format, int *i, t_printf *list);
int			ft_taille_cham(char *format, int *i, t_printf *list);
char		*ft_dieze_moins(char *tmp);
char		*ft_neg_champ(char *tmp);
char		*ft_plus_champ(char *tmp);
int			ft_flag_parce(char *format, int *i, t_printf *list);
char		*ft_dieze_zero(char *tmp);
char		*ft_plus_preci(char *tmp);
char		*ft_dieze_espace(char *tmp);
void		ft_preci_zero_d(char *tmp,t_printf *list, int u);
int			ft_flag_cast(va_list *args, t_printf *list);
void		ft_dell_zero(char *tmp);
int			ft_base(t_printf *list);
int			ft_instruction_d_i(va_list *args, char *format, t_printf *list);
int			ft_instruction_d_i_no(va_list *args, char *format,
			t_printf *list, char *tmp);
int			ft_instruction_o(va_list *args, char *format, t_printf *list);
int			ft_instruction_o_no(va_list *args, char *format, t_printf *list,
			char *tmp);
int			ft_instruction_x_no(va_list *args, char *format, t_printf *list,
			char *tmp);
int			ft_instruction_x(va_list *args, char *format, t_printf *list);
int			ft_instruction_s(va_list *args, char *format, t_printf *list);
int			ft_instruction_s_no(va_list *args, char *format, t_printf *list,
			char *tmp);
int			ft_instruction_big_x(va_list *args, char *format, t_printf *list);
int			ft_instruction_big_o(va_list *args, char *format, t_printf *list);
int			ft_instruction_p(va_list *args, char *format, t_printf *list);
int			ft_instruction_unic(va_list *args, char *format, t_printf *list);
int			ft_instruction_unis(va_list *args, t_printf *list);
int			ft_instruction_c(va_list *args, char *format, t_printf *list);
int			ft_instruction_u(va_list *args, char *format, t_printf *list);
int			ft_instruction_big_u(va_list *args, char *format, t_printf *list);
int			ft_pourcent(t_printf *list, char *format);
int			ft_parceur(t_printf *list, char *format, va_list *args);
int			ft_parce_instruction(t_printf *list, char *format, int *i);
size_t		ft_count_bit_w(wchar_t c);
char		*ft_itoa_base_neg(unsigned long long int value, int base);
char		*ft_app_taille_cham_moins_p(t_printf *list);
wchar_t		*ft_app_taille_cham_moins_w(t_printf *list);
int			ft_tfc(t_printf *list);
int			ft_instruction_unis_no(va_list *args, t_printf *list,
			wchar_t *tmp);
char		*ft_annex_d_i_no_end(t_printf *list, char *tmp, int u, int *ret);
char		*ft_annex_d_i_no_plus(t_printf *list, char *tmp,int *ret, int *u);
void		ft_instruction_d_i_no_free(t_printf *list, char *tmp);
char		*ft_annex_d_i_no(t_printf *list, char *tmp, int *u);
int			*ft_annex_d_i_no_bis(t_printf *list, char *tmp, int *u);
char		*ft_annex_d_i_yes_end(t_printf *list, char *tmp, int u, int *ret);
char    	*ft_annex_d_i_yes_plus(t_printf *list, char *tmp, int *ret);
char		*ft_annex_big_x_yes_end(t_printf *list, char *tmp, int u,
			int *ret);
int			ft_for_the_norm(char *format, int *i);
int			ft_for_the_norm_bis(char *format, int *i);
void		ft_flag_parce_choice_end_bis(t_printf *list, char *format, int *i);


#endif
