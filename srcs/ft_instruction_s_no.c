/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_s_no.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 07:01:01 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/09 20:42:01 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static char		*ft_annex_s_no_plus(t_printf *list, char *tmp, int *ret)
{
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
	*ret = *ret + ft_strlen(tmp);
	ft_putstr(tmp);
	return (tmp);
}

int				ft_instruction_s_no(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int		u;
	int		ret;
	char	*cnul;

	cnul = "(null)";
	ret = 0;
	u = 0;
	(void)format;
	list->str = va_arg(*args, char*);
	if (list->str == NULL)
		list->str = cnul;
	tmp = ft_annex_s_no_plus(list, tmp, &ret);
	ft_strdel(&tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}
