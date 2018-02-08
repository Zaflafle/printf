/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 03:59:26 by macuguen          #+#    #+#             */
/*   Updated: 2018/02/06 18:13:22 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdlib.h>

typedef struct	s_printf
{
    int            entier;

    int             dieze;
    int             aq_aq;
    int             plus;
    int             moins;
    int             zero;

    int             point;
    int             champ;
    int             taille_cham;
    int             precision;
    int             pretoile;
    int             chetoile;

    int             flag_h;
    int             flag_hh;
    int             flag_ll;
    int             flag_l;
    int             flag_j;
    int             flag_z;

    int long long   cast_flag;

    int             conv_d;
    int             conv_i;
    int             conv_o;
    int             conv_u;
    int             conv_s;
    int             conv_c;
    int             conv_p;
    int             conv_X;
    int             conv_U;
    int             conv_O;
    int             conv_S;
    int             conv_C;
    int             conv_x;

    char            c;
    char            *str;
	struct s_printf	*next;
}				t_printf;

int		ft_printf(const char *format, ...);

#endif
