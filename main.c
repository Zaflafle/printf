/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 23:56:58 by macuguen          #+#    #+#             */
/*   Updated: 2018/04/09 20:43:53 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "locale.h"

int main(void)
{
	int i;


	i = 0;
	setlocale(LC_ALL, "");
	// ft_printf("{%30S}\n", L"我是一只猫。");
	// ft_printf("{%30S}\n", L"我是一只猫。");
	// ft_printf("{%-30S}\n", L"我是一只猫。");
	// ft_printf("{%-30S}\n", L"我是一只猫。");
	// ft_printf("{%10d}\n", 42);
	// ft_printf("{%4d}\n", 10000);
	// ft_printf("{%30d}\n", 10000);
	// ft_printf("{%10d}\n", -42);
	// ft_printf("{%3c}\n", 0);
	// ft_printf("{%5p}\n", 0);
	// ft_printf("{%-15p}\n", 0);
	printf("{%-13p}\n", &strlen);
	printf("{%-13p}\n", &strlen);
	ft_printf("{%-12p}\n", &strlen);
	ft_printf("{%-12p}\n", &strlen);
	// ft_printf("{%10R}\n");
	// ft_printf("%.0p, %.p\n", &i, &i);
	// ft_printf("%.5p\n", 0);
	// ft_printf("%2.9p\n", 1234);
	// ft_printf("%2.9p\n", 1234567);
	// ft_printf("%.p, %.0p", 0, 0);
	// ft_printf("{%05.Z}", 0);
	// ft_printf("{%05.S}", L"42 c est cool");
	// ft_printf("%hhd - %hhd", SHRT_MAX - 42,  SHRT_MAX - 4200);
	// ft_printf("% x|%+x\n", 42, 42);
	// ft_printf("% X|%+X\n", 42, 42);
	ft_printf("%o, %ho, %hho\n", -42, -42, -42);
	ft_printf("%o\n", LONG_MAX);
	ft_printf("%O\n", LONG_MIN);
	ft_printf("% o|%+o\n", 42, 42);
	ft_printf("{%3.*d}\n", 0, 0);
	ft_printf("{%*.3d}\n", 0, 0);
	ft_printf("{%*.3d}\n", 5, 0);
	ft_printf("{%3.*d}\n", 0, 0);
	ft_printf("{%*.3d}\n", 0, 0);
	ft_printf("{%*.3d}\n", 5, 0);
		// ft_printf("%.4d", 42);
		// ft_printf("%.4d", 424242);
		// ft_printf("%.4d", -424242);
		// ft_printf("%15.4d", 42);
		// ft_printf("%15.4d", 424242);
		// ft_printf("%8.4d", 424242424);
		// ft_printf("%15.4d", -42);
		// ft_printf("%15.4d", -424242);
		// ft_printf("%8.4d", -424242424);
		// ft_printf("%4.15d", 42);
		// ft_printf("%4.15d", 424242);
		// ft_printf("%4.8d", 424242424);
		// ft_printf("%4.15d", -42);
		// ft_printf("%4.15d", -424242);
		// ft_printf("%4.8d", -424242424);
		// ft_printf("%.d, %.0d", 0, 0);
		// ft_printf("%.10d", -42);
		// ft_printf("%.4i", 42);
		// ft_printf("%15.4i", 42);
		// ft_printf("%4.15i", 42);
		// ft_printf("%.i, %.0i", 0, 0);
		// ft_printf("%.4u", 42);
		// ft_printf("%.4u", 424242);
		// ft_printf("%15.4u", 42);
		// ft_printf("%15.4u", 424242);
		// ft_printf("%8.4u", 424242424);
		// ft_printf("%4.15u", 42);
		// ft_printf("%4.15u", 424242);
		// ft_printf("%4.8u", 424242424);
		// ft_printf("%.u, %.0u", 0, 0);
	return (0);
}
