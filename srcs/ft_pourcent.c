/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pourcent.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 19:23:14 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/08 21:41:12 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

int		ft_tmfc(char *format)
{
	if (format[0] == '%' && format[1] == '%' && format[2] == '\0')
		return (1);
	else
		return (0);
}

int		ft_pourcent(t_printf *list, char *format)
{
	char	*tmp;
	int		ret;

	ret = 0;
	list->c = '%';
	//printf("||%d||\n",list->spl);
	if (list->moins == 1)
		tmp = ft_app_taille_cham_moins_c(list);
	else
		tmp = ft_app_taille_cham_c(list);
	if ((list->spl == 1 || list->dbl_prct == 1 || ft_tmfc(format) == 1) && list->champ != 1)
	{
		ft_putchar('%');
		ret = ret + 1;
	}
	else
	{
		ret = ret + ft_strlen(tmp);
		ft_putstr(tmp);
	}
	//printf("ICI\n");	
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}
