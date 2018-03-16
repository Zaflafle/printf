/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 08:03:15 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/08 22:34:53 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/includes/libft.h"
#include "../includes/ft_printf.h"

static int		ft_instruction_p_no(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int ret;
	int i;

	ret = 0;
	i = 0;
	ft_flag_cast(args, format, list);
	if (list->moins == 1 && list->champ == 1)
	{
		tmp = ft_app_taille_cham_moins_p(list);
		while (ft_isdigit(tmp[i]) != 1)
			i++;
		tmp[i - 1] = 'x';
		tmp[i - 2] = '0';	
	}
	else
	{
		tmp = ft_app_taille_cham(list);
		while (ft_isdigit(tmp[i]) != 1)
			i++;
		tmp[i - 1] = 'x';
		tmp[i - 2] = '0';	
	}
	if (list->champ == 0)
	{
		ft_putstr("0x");
		ret = ret + 2;
	}
	ret = ret + ft_strlen(tmp);
	ft_putstr(tmp);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

static int		ft_instruction_p_yes(va_list *args, char *format,
				t_printf *list, char *tmp)
{
	int ret;
	int i;

	ret = 0;
	i = 0;
	if (list->chetoile == 1)
		list->taille_cham = va_arg(*args, int);
	ft_flag_cast(args, format, list);
	if (list->moins == 1 && list->champ == 1)
		tmp = ft_app_taille_cham_moins_p(list);
	else if (list->moins == 0 && list->champ == 1)
	{
		tmp = ft_app_taille_cham(list);
	}
	while (ft_isdigit(tmp[i]) != 1)
		i++;
	tmp[i - 1] = 'x';
	tmp[i - 2] = '0'; 
	ret = ret + ft_strlen(tmp);
	ft_putstr(tmp);
	free(list->str);
	free(tmp);
	ft_memset(list, 0, sizeof(t_printf));
	return (ret);
}

int				ft_instruction_p(va_list *args, char *format, t_printf *list)
{
	char	*tmp;
	int		ret;

	tmp = NULL;
	ret = 0;
	if (list->pretoile != 1 && list->chetoile != 1)
		ret = ret + ft_instruction_p_no(args, format, list, tmp);
	else if (list->pretoile == 1 || list->chetoile == 1)
		ret = ret + ft_instruction_p_yes(args, format, list, tmp);
	return (ret);
}
