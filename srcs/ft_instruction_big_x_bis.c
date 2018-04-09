/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_big_x_bis.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 22:52:32 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/09 20:42:01 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static void		*ft_annex_big_x_yes_end_bis(t_printf *list, char *tmp,
				int u, int *ret)
{
	if (list->point == 1 && u == 2 && list->precision == 0 && list->champ == 0)
		*ret = *ret + 0;
	else
	{
		ft_strupper(tmp);
		*ret = *ret + ft_strlen(tmp);
		ft_putstr(tmp);
	}
}

char			*ft_annex_big_x_yes_end(t_printf *list, char *tmp,
				int u, int *ret)
{
	if (list->dieze == 1 && ft_atoi(tmp) != 0)
	{
		if (list->zero == 1 && list->champ == 1)
			ft_dieze_zero(tmp);
		else if (list->champ == 1 && list->moins != 1 &&
			ft_strlen(list->str) != (unsigned int)list->taille_cham)
			ft_dieze_espace(tmp);
		else if (list->moins == 1)
			ft_dieze_moins(tmp);
		else if (ft_strlen(list->str) == (unsigned int)list->taille_cham)
		{
			ft_putstr("0X");
			*ret = *ret + 2;
		}
		else
		{
			ft_putstr("0X");
			*ret = *ret + 2;
		}
	}
	ft_annex_big_x_yes_end_bis(list, tmp, u, ret);
	return (tmp);
}
