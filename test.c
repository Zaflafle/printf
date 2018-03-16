/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 22:14:06 by macuguen          #+#    #+#             */
/*   Updated: 2018/03/13 03:19:56 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "includes/ft_printf.h"
#include <wchar.h>
#include <locale.h>
#include <limits.h>

int main(void)
{
    //printf("bite");
    //short i = 5;
    //ft_printf("%s\n", );
    //printf("un %*.*s lala deux\n",10 , 3,"lala"); //ok
    //ft_printf("un %*.*s lala deux\n",10 ,3 ,"lala"); //ok
    //printf("un %10.*s lala deux\n", 2,"lala"); //ok
    //ft_printf("ele s'appelle %*.*s est a %10d pour %ld bites",10,3,"lalala",5,45896541254);
    //ft_parceur("un %10.*s lala deux\n",2 ,"lala"); //ok
    //ft_parceur("un %.*s lala deux\n\n",3 ,"lala");
    //ft_parceur("test 2 ==> %%X %X\n",542);
    //printf("test 2 ==> %%X %X\n",542);
    //ft_parceur("un %10.2s lala deux\n","lala"); //ok
    //printf("un %10.2s lala deux\n","lala"); //ok
    /* printf("%%#o = %#o\n", 4567855);
    printf("%%x = %x\n", 4567855);    
    printf("%%#x = %#x\n", 4567855);
    printf("%%X = %X\n", 4567855);    
    printf("%%#X = %#X\n", 4567855);*/
    //ft_printf ("un chifre de %o et de %d", 45, 10);
    //printf("%%c = %c\n",a);
    //ft_parceur("%x %s\n", 42, "BONJOUR");
    //printf("%x %#s\n", 42, "BONJOUR");
    //printf("un %05d lala deux\n",56);
   // printf("test 2 ==> %%X %X\n",542);
    //printf("test 1 ==> %%#o %#o\n",55);
   // printf("test 2 ==> %%#o %#o\n",0);
   // printf("test 3 ==> %%#o %#o\n",012345);
    //printf("test 4 ==> %%#o %#o\n",12345);
    //printf("test 1 ==> %%#x %#x\n",542);
    //printf("test 2 ==> %%x %x\n",542);
    //printf("test 1 ==> %%#X %#X\n",542);
    //printf("test 2 ==> %%X %X\n",542);
   // printf
 //  printf("test 1 ==> %%d %.10d\n",255); // a voir precision conter comme cham ?
  // printf("test 1 ==> %%d %.10d\n",255); // a voir precision conter comme cham ?
   //printf("test 1 ==> %%+d %+-.*d\n",10,+25555); // a voir precision conter comme cham ?
   //ft_printf("test 2 ==> %%+d %+-.*d\n",10,+25544);
   // printf("test 2 ==> %% d% .*d\n",10,+542);
   // ft_printf("test 2 ==> %% d% .*d\n",10,+542);
   // printf("test 1 ==> %%X %X\n",542);
    //ft_printf("test 2 ==> %%X %X\n",542);
    //ft_printf("test 2 ==> %%O %lO\n",12345678901); ok
    //printf("test 1 ==> %%O %lO\n",12345678901); ok
    //ft_printf("test 2 ==> %%o %o\n",12345678901); ok
    //printf("test 1 ==> %%o %o\n",12345678901); ok
    //printf("%0.5d\n", -42);      //a faire
    //ft_printf("%0.5d\n", -42);    //a faire
    /*char* i;
    i = NULL;
    printf("test 1 ==> %%p %p\n", &i);
    ft_printf("test 2 ==> %%p %p\n",&i);*/
    
//setlocale(LC_ALL, "");
//wint_t *c;
//ft_printf("%%");
//ft_printf("%-15x", 542); // ok
//c = L"𝄞𝄞𝄞𝄞𝄞𝄞𝄞𝄞";
//printf("test 1 ==> %%C %C  \n", c); //ok
//ft_printf("test 2 ==> %%C %C\n",c); //ok
//printf("test 1 ==> %%S %S\n",c);
//ft_printf("test 2 ==> %%S %S\n",c);
//ft_printf("test 1 ==> %%c %c\n",'\0');
//printf("test 2 ==> %%c %c\n",'\0');     //padding ?
//ft_printf("test 1 ==> %%U %lU\n",-429496729600000);
//printf("test 2 ==> %%U %lU\n",-429496729600000);
/*printf("test 2 ==> %%X %X\n",542);
printf("test 2 ==> %%X %X\n",542);
printf("test 2 ==> %%X %X\n",542);
printf("test 2 ==> %%X %X\n",542);
printf("test 2 ==> %%X %X\n",542);*/
// ft_printf("%#x\n", 0);
// ft_printf("%#8x\n", 42);
// ft_printf("%#08x\n", 42);
// ft_printf("%x", 4294967296);
//ft_printf("%#-08x", 42);
// ft_printf("@moulitest: %#.x %#.0x", 0, 0);
//    ft_printf("%x\n", -42);
//    printf("printf = %x\n", -42);
//  ft_printf("%x\n", 4294967296);
//ft_printf("%-10s is a string\n", "this");
// printf("%-.2s is a string\n", "this");
// ft_printf("%-.2s is a string\n", "this");
//  ft_printf("@moulitest: %s\n", NULL);
//  printf("@moulitest: %s\n", NULL);
//  ft_printf("@moulitest: %s\n", "");
//  printf("@moulitest: %s\n", "");
// printf("%d\n",ft_printf("lala %#o lala\n", 42));
// printf("%d\n",printf("lala %#o lala\n", 42));
//    printf("printf = %x\n", 4294967296); 
// ft_printf("%lx\n", 4294967296);
// printf("%x\n", 4294967296);
// printf("%lx\n", 4294967296);
//  ft_printf("%X", -42);
//ft_printf("%-5c\n", 42);
//printf("%-5c\n", 42);
//  ft_printf("%#6o\n", 2500);
//  printf("%#6o\n", 2500);
//printf("%-#6o\n", 2500);
//ft_printf("%-#6o\n", 2500);
//ft_printf("%s\n","lala");
// printf("%d\n", 2147483648);
// ft_printf("%d\n", 2147483648);
// printf("%ld\n", -2147483649);
// ft_printf("%d\n", -2147483649);
//ft_printf("%+lld", (long long)4242424242424242424242);
//printf("%+lld", (long long)4242424242424242424242);
//ft_printf("%s\n", "\0\0\0\0\0\0\0");
//ft_printf("%.d\n",0);
//printf("%.d\n",0);
//ft_printf("%05d\n", -42);
//printf("%05d\n", -42);
// ft_printf("%0+5d\n", -42);
// printf("%0+5d\n", -42);
// ft_printf("% 10.5d\n", 4242);
// printf("% 10.5d\n", 4242);
// printf("%+10.5d\n", 4242);
// ft_printf("%+10.5d\n", 4242);
// ft_printf("%.10d\n", -42);
// printf("%.10d\n", -42);
//ft_printf("1 @moulitest: %.d %.0d\n", 0, 0); //PUTE
//printf("2 @moulitest: %.d %.0d\n", 0, 0);      //PUTE
// printf("printf ==== %10.45h#...@...#12#--##   ##5#+\n###hd\n", &i);
// ft_printf("moi ==== %10.-45h#......#12#--#/#   ##5#+\n###hd\n", &i);
//printf("\n %d octets pour variable de type char ",sizeof(char));
// printf("%jd", -9223372036854775808);
/*unsigned int i = -1;
  printf("%u\n", i);
  ft_printf("%u\n", i);*/
  //printf("%hhd", -128);
 // printf("%lld", -9223372036854775807);
 //printf("%jd", -9223372036854775808);
// printf("%+u", 4294967295);
//printf("%hU", 4294967296);
// printf("2 gg %% %%\n");
// ft_printf("2 gg %% %%\n");
// ft_printf(" 1 @moulitest: %#.x %#.0x\n", 0, 0);
// printf(" 2 @moulitest: %#.x %#.0x\n", 0, 0);
// printf("1 %#8x\n", 42);
// ft_printf("2 %#8x\n", 42);
//printf("%*d\n", 5, 5);
//int i = 0;
//printf("%d\n",ft_printf("%C\n",&i));
//printf("%d\n",printf("%C\n", &i));
//printf("%d\n",printf("%*d\n", 5, 5));
// ft_printf("%lld\n%lld\n", 0, 42);
// ft_printf("%lld\n", LLONG_MAX);
// printf("%lld\n", LLONG_MIN);
// ft_printf("%lld\n", LLONG_MIN);
//ft_printf("%llu, %llu", 0, ULLONG_MAX);
// ft_printf("%llo, %llo", 0, ULLONG_MAX);
//ft_printf("%llx, %llx", 0, ULLONG_MAX);
// ft_printf("%llX, %llX", 0, ULLONG_MAX);
// ft_printf("%llO, %llO", 0, USHRT_MAX);
// ft_printf("%llU, %llU", 0, USHRT_MAX);
//printf("%llD, %llD", 0, USHRT_MAX);
//   ft_printf("%ld%ld\n", 0, 42);
//   ft_printf("%ld\n", (long)INT_MAX + 1);
//   ft_printf("%ld\n", (long)INT_MIN - 1);
//  ft_printf("%ld\n", LONG_MAX);
//  ft_printf("%ld\n", LONG_MIN);
//  ft_printf("%li%li\n", 0, 42);
//  ft_printf("%li\n", (long)INT_MAX + 1);
//  ft_printf("%li\n", (long)INT_MIN - 1);
//  ft_printf("%li\n", LONG_MAX);
//  ft_printf("%li\n", LONG_MIN);
//  ft_printf("%lu, %lu\n", 0, ULONG_MAX);
//  ft_printf("%lo, %lo\n", 0, ULONG_MAX);
//  ft_printf("%lx, %lx\n", 0, ULONG_MAX);
//  ft_printf("%lX, %lX\n", 0, ULONG_MAX);
//  ft_printf("%lc, %lc\n", L'暖', L'ح');
//  ft_printf("%ls, %ls\n", L"暖炉", L"لحم خنزير");
//  ft_printf("%lO, %lO\n", 0, USHRT_MAX);
//  ft_printf("%lU, %lU\n", 0, USHRT_MAX);
//  ft_printf("%lD, %lD\n", 0, USHRT_MAX);
// ft_printf("%lld%lld\n", 0, 42);
// ft_printf("%lld\n", LLONG_MAX);
// ft_printf("%lld\n", LLONG_MIN);
// ft_printf("%lli%lli\n", 0, 42);
// ft_printf("%lli\n", LLONG_MAX);
// ft_printf("%lli\n", LLONG_MIN);
// ft_printf("%llu, %llu\n", 0, ULLONG_MAX);
// ft_printf("%llo, %llo\n", 0, ULLONG_MAX);
// ft_printf("%llx, %llx\n", 0, ULLONG_MAX);
// ft_printf("%llX, %llX\n", 0, ULLONG_MAX);
// ft_printf("%llO, %llO\n", 0, USHRT_MAX);
// ft_printf("%llU, %llU\n", 0, USHRT_MAX);
// ft_printf("%llD, %llD\n", 0, USHRT_MAX);
// ft_printf("%jd%jd\n", 0, 42);
// ft_printf("%jd\n", LLONG_MAX);
// ft_printf("%jd\n", LLONG_MIN);
// ft_printf("%ji%ji\n", 0, 42);
// ft_printf("%ji\n", LLONG_MAX);
// ft_printf("%ji\n", LLONG_MIN);
// ft_printf("%ju, %ju\n", 0, ULLONG_MAX);
// ft_printf("%jo, %jo\n", 0, ULLONG_MAX);
// ft_printf("%jx, %jx\n", 0, ULLONG_MAX);
// ft_printf("%jX, %jX\n", 0, ULLONG_MAX);
// ft_printf("%jO, %jO\n", 0, USHRT_MAX);
// ft_printf("%jU, %jU\n", 0, USHRT_MAX);
// ft_printf("%jD, %jD\n", 0, USHRT_MAX);
// ft_printf("%zd%zd\n", 0, 42);
// ft_printf("%zd\n", LLONG_MAX);
// ft_printf("%zi%zi\n", 0, 42);
// ft_printf("%zi\n", LLONG_MAX);
// ft_printf("%zu, %zu\n", 0, ULLONG_MAX);
// ft_printf("%zo, %zo\n", 0, ULLONG_MAX);
// ft_printf("%zx, %zx\n", 0, ULLONG_MAX);
// ft_printf("%zX, %zX\n", 0, ULLONG_MAX);
// ft_printf("%zO, %zO\n", 0, USHRT_MAX);
// ft_printf("%zU, %zU\n", 0, USHRT_MAX);
// ft_printf("%zD, %zD\n", 0, USHRT_MAX);
// ft_printf("%.4s\n", "42");
// ft_printf("%.4s\n", "42 is the answer");
// ft_printf("%15.4s\n", "42");
// ft_printf("%15.4s\n", "I am 42");
// ft_printf("%15.4s\n", "42 is the answer");
// ft_printf("%4.15s\n", "42");
// ft_printf("%4.15s\n", "I am 42");
// ft_printf("%4.15s\n", "42 is the answer");
// ft_printf("%4.s\n", "42");
//printf("%.4S\n", L"我是一只猫。");
//printf("%15.4S\n", L"我是一只猫。");
//printf("%4.15S\n", L"我是一只猫。");
//ft_printf("%4.S\n", L"我是一只猫。");
//printf("%4.1S\n", L"Jambon");
//ft_printf("%%");
 //printf("\n||%d||\n",ft_printf("1 aa%%bb\n"));
// printf("||%d||\n",ft_printf("1 %%%%%%%%%%\n"));
// printf("||%d||\n",ft_printf("1 .%%.%%.%%.%%.%%.%%.%%.%%.\n"));
    //ft_printf("1 %\n");
    // ft_printf("1 % Zoooo\n");
    // ft_printf("1 {%}\n");
// printf("||%d||\n",ft_printf("1 {% %}\n"));
 //printf("||%d||\n",printf("%%"));
// printf("\n||%d||\n",printf("2 aa%%bb\n"));
// printf("||%d||\n",printf("2 %%%%%%%%%%\n"));
// printf("||%d||\n",printf("2 .%%.%%.%%.%%.%%.%%.%%.%%.\n"));
    //printf("2 %\n");
    //printf("2 % Zoooo\n");
    //printf("2 {%}\n");
//printf("||%d||\n",printf("2 {% %}\n"));
setlocale(LC_ALL, "");

// printf("========================================\n               ft_printf              \n========================================\n");
// printf("||%d||",ft_printf("%S\n", L"米"));
// printf("||%d||",ft_printf("%S\n", L"我是一只猫。"));
// 	printf("||%d||",ft_printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S\n",
// 	L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
// 	L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L""));
//     printf("||%d||",ft_printf("%S",L""));
//     printf("||%d||",ft_printf("a%Sb%sc%S\n", L"我", "42", L"猫"));
//     printf("||%d||",ft_printf("{%S}\n", NULL));
//  printf("\n========================================\n               printf                \n========================================\n");
// printf("||%d||",printf("%S\n", L"米"));
// printf("||%d||",printf("%S\n", L"我是一只猫。"));
// printf("||%d||",printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S\n",
// L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
// L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L""));
// printf("||%d||",printf("%S",L""));
// printf("||%d||",printf("a%Sb%sc%S\n", L"我", "42", L"猫"));
// printf("||%d||",printf("{%S}\n", NULL));
// printf("========================================\n               ft_printf              \n========================================\n");
// 	ft_printf("%i\n", 42);
// 	ft_printf("%d\n", -42);
// 	ft_printf("before %i after\n", 42);
// 	ft_printf("%i%i%i%i%i\n",
// 		1, -2, 3, -4, 5);
// 	ft_printf("a%ib%ic%id\n",
// 		1, -2, 3);
// printf("\n========================================\n               printf                \n========================================\n");

//     printf("%i\n", 42);
//     printf("%d\n", -42);
//     printf("before %i after\n", 42);
//     printf("%i%i%i%i%i\n",
//     1, -2, 3, -4, 5);
//     printf("a%ib%ic%id\n",
//     1, -2, 3);

// printf("========================================\n               ft_printf              \n========================================\n");

// printf("||%d||",ft_printf("%C\n", 'c'));
// printf("||%d||",ft_printf("%C%C\n", '4', '2'));
// printf("||%d||",ft_printf("%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C \
// %C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\
// %C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\n",
// ' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-',
// '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';',
// '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
// 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
// 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e',
// 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
// 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}'));
// printf("||%d||",ft_printf("%C\n", L'猫'));
// printf("||%d||",ft_printf("%C\n", L'δ'));
// printf("||%d||",ft_printf("%C\n", L'요'));
// printf("||%d||",ft_printf("%C\n", L'莨'));
// printf("||%d||",ft_printf("%C\n", L'ي'));
// printf("||%d||",ft_printf("%C\n", 0));

// printf("\n========================================\n               printf                \n========================================\n");
// printf("||%d||",printf("%C\n", 'c'));
// printf("||%d||",printf("%C%C\n", '4', '2'));
// printf("||%d||",printf("%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C \
// %C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\
// %C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C\n",
// ' ', '!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-',
// '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';',
// '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
// 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
// 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e',
// 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
// 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}'));
// printf("||%d||",printf("%C\n", L'猫'));
// printf("||%d||",printf("%C\n", L'δ'));
// printf("||%d||",printf("%C\n", L'요'));
// printf("||%d||",printf("%C\n", L'莨'));
// printf("||%d||",printf("%C\n", L'ي'));
// printf("||%d||",printf("%C\n", 0));
/*printf("\n========================================\n               ft_printf                \n========================================\n");

//printf("||%d||\n",ft_printf("%ld%ld\n", 0, 42));
//printf("||%d||\n",ft_printf("%ld\n", (long)INT_MAX + 1));
printf("||%d||\n",ft_printf("%ld\n", (long)INT_MIN - 1));
//printf("||%d||\n",ft_printf("%ld\n", LONG_MAX));
printf("||%d||\n",ft_printf("%ld\n", LONG_MIN));
//printf("||%d||\n",ft_printf("%li%li\n", 0, 42));
//printf("||%d||\n",ft_printf("%li\n", (long)INT_MAX + 1));
printf("||%d||\n",ft_printf("%li\n", (long)INT_MIN - 1));
//printf("||%d||\n",ft_printf("%li\n", LONG_MAX));
printf("||%d||\n",ft_printf("%li\n", LONG_MIN));
//printf("||%d||\n",ft_printf("%lu, %lu\n", 0, ULONG_MAX));
//printf("||%d||\n",ft_printf("%lo, %lo\n", 0, ULONG_MAX));
//printf("||%d||\n",ft_printf("%lx, %lx\n", 0, ULONG_MAX));
//printf("||%d||\n",ft_printf("%lX, %lX\n", 0, ULONG_MAX));
//printf("||%d||\n",ft_printf("%lc, %lc\n", L'暖', L'ح'));
//printf("||%d||\n",ft_printf("%ls, %ls\n", L"暖炉", L"لحم خنزير"));
//printf("||%d||\n",ft_printf("%lO, %lO\n", 0, USHRT_MAX));
//printf("||%d||\n",ft_printf("%lU, %lU\n", 0, USHRT_MAX));
//printf("||%d||\n",ft_printf("%lD, %lD\n", 0, USHRT_MAX));

printf("\n========================================\n               printf                \n========================================\n");

//printf("||%d||",printf("%ld%ld\n", 0, 42));
//printf("||%d||",printf("%ld\n", (long)INT_MAX + 1));
printf("||%d||",printf("%ld\n", (long)INT_MIN - 1));
//printf("||%d||",printf("%ld\n", LONG_MAX));
printf("||%d||",printf("%ld\n", LONG_MIN));
//printf("||%d||",printf("%li%li\n", 0, 42));
//printf("||%d||",printf("%li\n", (long)INT_MAX + 1));
printf("||%d||",printf("%li\n", (long)INT_MIN - 1));
//printf("||%d||",printf("%li\n", LONG_MAX));
printf("||%d||",printf("%li\n", LONG_MIN));
//printf("||%d||",printf("%lu, %lu\n", 0, ULONG_MAX));
//printf("||%d||",printf("%lo, %lo\n", 0, ULONG_MAX));
//printf("||%d||",printf("%lx, %lx\n", 0, ULONG_MAX));
//printf("||%d||",printf("%lX, %lX\n", 0, ULONG_MAX));
//printf("||%d||",printf("%lc, %lc\n", L'暖', L'ح'));
//printf("||%d||",printf("%ls, %ls\n", L"暖炉", L"لحم خنزير"));
//printf("||%d||",printf("%lO, %lO\n", 0, USHRT_MAX));
//printf("||%d||",printf("%lU, %lU\n", 0, USHRT_MAX));
//printf("||%d||",printf("%lD, %lD\n", 0, USHRT_MAX));*/
//42
// ft_printf("%hd%hd\n", (short int)0, (short int)42);
// printf("%hd%hd\n", (short int)0, (short int)42);
// printf("%hd", SHRT_MAX);
// printf("%hd", SHRT_MIN);
// printf("%hi%hi", 0, 42);
// printf("%hi", SHRT_MAX);
// printf("%hi", SHRT_MIN);
// printf("%hu, %hu", 0, USHRT_MAX);
// printf("%ho, %ho", 0, USHRT_MAX);
// printf("%hx, %hx", 0, USHRT_MAX);
// printf("%hX, %hX", 0, USHRT_MAX);
// printf("%hO, %hO", 0, USHRT_MAX);
//intf("%hU, %hU", 0, USHRT_MAX);
//printf("%hD, %hD", 0, USHRT_MAX);
//43hh
// printf("%hhd%hhd", 1, 42);
 //printf("%hhd", CHAR_MAX);
// printf("%hhd", CHAR_MAX + 42);
//  printf("%hhd", CHAR_MIN);
// printf("%hhd", CHAR_MIN - 42);
// printf("%hhi%hhi", 0, 42);
 //printf("%hhd", CHAR_MAX);
 //printf("%hhd", CHAR_MAX + 42);
 //printf("%hhi", CHAR_MIN);
// printf("%hhi", CHAR_MIN - 42);
//  printf("%hhu, %hhu", 0, UCHAR_MAX);
//  printf("%hho, %hho", 0, UCHAR_MAX);
//  printf("%hhx, %hhx", 0, UCHAR_MAX);
//  printf("%hhX, %hhX", 0, UCHAR_MAX);
// printf("%hhu, %hhu", 0, UCHAR_MAX + 42);
// printf("%hho, %hho", 0, UCHAR_MAX + 42);
// printf("%hhx, %hhx", 0, UCHAR_MAX + 42);
// printf("%hhX, %hhX", 0, UCHAR_MAX + 42);
//  printf("%hhO, %hhO", 0, USHRT_MAX);
//  printf("%hhU, %hhU", 0, USHRT_MAX);
 //printf("%hhD, %hhD", 0, USHRT_MAX);
 //printf("%hhC, %hhC", 0, L'米');
 //printf("%hhS, %hhS", 0, L"米米");

//printf("%jd", LLONG_MIN);
//printf("%ji", LLONG_MIN);

// printf("%lld", LLONG_MIN);
// printf("%lli", LLONG_MIN);

//   printf("%ld", (long)INT_MIN - 1);
// printf("%ld", LONG_MIN);
// printf("%li", (long)INT_MIN - 1);
// printf("%li", LONG_MIN);

//printf("{%05p}", 0);
//printf("%D", LONG_MAX);
// printf("%D", LONG_MIN);
// printf("{%5p}", 0);
// printf("{%-15p}", 0);
// printf("{%-13p}", &strlen);
// printf("{%-15Z}", 123);
// printf("%+o", 0);
// printf("%+o", 42);
// printf("{%+03d}", 0);
//printf("%.4d", -424242);
// printf("%hhd - %hhd", SHRT_MAX - 42, SHRT_MAX - 4200);
//  printf("%zd", LLONG_MIN);
// printf("%hhu / %hhu", SHRT_MAX - 42, SHRT_MAX - 4200);
// printf("%o, %ho, %hho", -42, -42, -42);
// printf("% o|%+o", 42, 42);
// printf("%#.o", 42);
// printf("% x|%+x", 42, 42);

// printf("%.0p,\n %.p", 0, 0);
// printf("%.5p\n", 0);
// printf("%9.2p\n", 1234);
// printf("%9.2p\n", 1234567);
// printf("%2.9p\n", 1234);
// printf("%2.9p\n", 1234567);

// 	ft_printf("%.0p,\n %.p", 0, 0);
// 	ft_printf("%.5p\n", 0);
// 	ft_printf("%9.2p\n", 1234);
// 	ft_printf("%9.2p\n", 1234567);
// 	ft_printf("%2.9p\n", 1234);
// 	ft_printf("%2.9p\n", 1234567);
// ft_printf("%.4O", 42);
// printf("%ld\n", (long)INT_MIN - 1);
// ft_printf("%ld\n", (long)INT_MIN - 1);

// ft_printf("%O\n", LONG_MAX);
// printf("%O\n", LONG_MAX);

// ft_printf("%U\n", ULONG_MAX);
// printf("%U\n", ULONG_MAX);

//  printf("%ld\n", LONG_MIN); TAMERE
// ft_printf("%ld\n", LONG_MIN); TAMERE

	//TAMERE //printf("%li\n", LONG_MIN);
	// printf("%lu\n", ULONG_MAX);
	// printf("%lo\n", ULONG_MAX);
	// printf("%lx\n", ULONG_MAX);
    // printf("%lX\n", ULONG_MAX);
    
    // TAMERE //ft_printf("%li\n", LONG_MIN);
	// ft_printf("%lu\n", ULONG_MAX);
	// ft_printf("%lo\n", ULONG_MAX);
	// ft_printf("%lx\n", ULONG_MAX);
    // ft_printf("%lX\n", ULONG_MAX);
    //     printf("||%d\n",ft_printf("{%-50p}\n", &strlen));
    //     printf("||%d\n",printf("{%-50p}\n", &strlen));
    //    // printf("{%10R}");
    //    printf("||%d\n",ft_printf("{%-30S}\n", L"我是一只猫。"));
    //    printf("||%d\n",printf("{%-30S}\n", L"我是一只猫。"));
    // printf("||%d\n",ft_printf("%#X\n", 0));
    // printf("||%d\n", printf("%#X\n", 0));
    // printf("||%d\n", printf("{%+03d}\n", 0));
    // printf("||%d\n",printf("{% 03d}\n", 0));
    // printf("||%d\n",printf("{%+03d}\n", 12));

    // printf("||%d\n",ft_printf("{%+03d}\n", 0));
    // printf("||%d\n",ft_printf("{% 03d}\n", 0));
    // printf("||%d\n",ft_printf("{%+03d}\n", 12));
    // printf("{%+03d}\n", 123456);
    // ft_printf("{%+03d}\n", 123456);
    // printf("{%+03d}\n", 12);
    // ft_printf("{%+03d}\n", 12);
    // printf("%15.4d\n", -424242);
    // ft_printf("%15.4d\n", -424242);
    // printf("%15.4d\n", -42);
    // ft_printf("%15.4d\n", -42);
    // printf("1 %4.15d\n", -42);
    // ft_printf("2 %4.15d\n", -42);
    /*int tr;

    tr = -42;
    printf("||%d||",ft_printf("%x\n", tr));
    printf("||%d||",printf("%x\n", tr));
    ft_printf("%X\n", -42);
    printf("%X\n", -42);
    ft_printf("%x\n", 4294967296);
    printf("%x\n", 4294967296);

    ft_printf("%#6o\n", 2500);
    printf("%#6o\n", 2500);*/
    // printf("%u\n", -1);
    // ft_printf("%u\n", -1);
    // printf("%u\n", 4294967296);
    // ft_printf("%u\n", 4294967296);
    // ft_printf("1 %.10d\n", -42);
    // printf("2 %.10d\n", -42);
    // ft_printf("%.4d\n", -424242);
    // printf("%.4d\n", -424242);
    // ft_printf("%#o\n", 42);
    // printf("%#o\n", 42);
    // ft_printf("1 %.u, %.0u\n", 0, 0);
    // printf("2 %.u, %.0u\n", 0, 0);
    // printf("%.u, %.0u", 0, 0)
    // ft_printf("1 %.4O\n", 42);
    // printf("2 %.4O\n", 42);
    // ft_printf("%+O\n", 0);
    // printf("%+O\n", 0);
    // printf("1 %.4X\n", 42);  
    // ft_printf("2 %.4X\n", 42);  

    // printf("||1 %d||",printf("1 %4.S\n", L"我是一只猫。"));
    // printf("||2 %d||",ft_printf("2 %4.S\n", L"我是一只猫。"));

        //printf("%.p, %.0p", 0, 0);
        //printf("{%05.s}", 0);
        //printf("{%05.%}", 0);
        //printf("{%05.Z}", 0);
        // printf("1 %#.3o\n", 1);
        // ft_printf("2 %#.3o\n", 1);
        //printf("{%05.S}", L"42 c est cool");
        //printf("%zi", LLONG_MIN);
        // printf("%o\n", LONG_MAX);
        // ft_printf("%o\n", 9223372036854775807L);
        // printf("||1 %d||",printf("{%*c}\n", -15, 0));
        // printf("||2 %d||",ft_printf("{%*c}\n", -15, 0));
        // printf("||1 %d||",printf("{%*s}\n", 5, 0));
        // printf("||2 %d||",ft_printf("{%*s}\n", 5, 0));
        int i;

        i = 0;
        // printf("||1 %d||",printf("1 {%*p}\n", 10, 0));
        // printf("||2 %d||",ft_printf("2 {%*p}\n", 10, 0));
        // printf("1=%*.*d\n", 0, 3, 0);
        // ft_printf("2=%*.*d\n",0, 3, 0);
        // printf("1=%*.*d\n", 0, 4, 2);
        // ft_printf("1 {%05.*d}\n", -15, 42);
        // printf("2 {%05.*d}\n", -15, 42);
        //          BUG     ft_printf("%ld\n", LONG_MIN);
        //          BUG     printf("%ld\n", LONG_MIN);
        //          BUG     ft_printf("%d\n", 42);
        //          BUG     printf("%d\n", 42);
        //          BUG     printf("||1 %d||",ft_printf("%li\n", LONG_MAX));
        //          BUG     printf("||1 %d||", printf("%li\n", LONG_MAX));
        // printf("%x\n", -42);
        // ft_printf("%x\n", -42);
        // printf("%5%");
        // printf("%-5%");
        // printf("%.0%");
        
       // printf("%x", 4294967296);
        // printf("%X", 4294967296);
        // printf("%hhd", 128);
        // printf("%hhd", -128);
        // printf("%lld", -9223372036854775808);
       // printf("%jd", -9223372036854775808);
       
       // printf("%u", 4294967296);
        //printf("%hU", 4294967296);
        // printf("||1 %d||",printf("%x\n", -42));                  
        // printf("||1 %d||",printf("%x\n", -42));          
        // printf("||1 %d||",printf("%zd\n", -1));
        // printf("||1 %d||",printf("%u\n", -1));
        // ft_printf("||2 %d||",ft_printf("%x\n", -42));
        // ft_printf("||2 %d||",ft_printf("%X\n", -42));
        // ft_printf("||2 %d||",ft_printf("%zd\n", -1));
        // ft_printf("||2 %d||",ft_printf("%u\n", -1));

        // ft_printf("%li", LONG_MAX);
        //printf("%55.3p",&i);
        // printf("%lX\n", 4294967296);
        // ft_printf("%lX\n", 4294967296);
        //printf("1 {%}\n");
        //ft_printf("2 {%}\n");
        // printf("||1 %d||",printf("%u\n", 4294967296));
        // printf("||1 %d||",ft_printf("%u\n", 4294967296));
        // printf("%hhu / %hhu\n", 4200000, 36);
        // ft_printf("%hhu / %hhu\n", 4200000, 36);
        // printf("%hd", SHRT_MIN);
        // ft_printf("||2 %d||",printf("2  %55p", &i));
        // ft_printf("||1 %d||",ft_printf("1  %55p", &i));
        // ft_printf("2 : %#x\n", 15);                              a corriger
        // printf("1 : %#x\n", 15);
         
        
        return (0);
}