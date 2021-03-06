/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 23:15:14 by macuguen          #+#    #+#             */
/*   Updated: 2018/02/03 07:43:35 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_tolower(int c)
{
	int d;

	if (c > 64 && c < 91)
	{
		d = c + 32;
		return (d);
	}
	else
		return (c);
}
