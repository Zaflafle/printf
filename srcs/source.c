/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 06:19:14 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/01 15:41:59 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int		ft_printf(const char *format, ...)
{
	int			i;
	t_printf	*list;
	va_list		args;

	i = 0;
	list = (t_printf*)ft_memalloc(sizeof(t_printf));
	va_start(args, format);
	i = ft_parceur(list, (char*)format, &args);
	//free(list);
	va_end(args);
	return (i);
}
