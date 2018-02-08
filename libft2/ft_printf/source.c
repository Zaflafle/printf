/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 06:19:14 by macuguen          #+#    #+#             */
/*   Updated: 2018/02/08 03:55:02 by macuguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include <stdio.h>

char	*ft_convert(long int n, int base, char *str, int i)
{
	long int	div;
	char		temp;

	div = 1;
	if (n < 0)
	{
		n = -n;
		str[i] = '-';
		i++;
	}
	while (n / div >= base)
		div *= base;
	while (div > 0)
    {  
		temp = '0' + n / div;
		if (temp > '9')
			str[i] = (temp + 39);
		else
			str[i] = temp;
		n %= div;
		div /= base;
		i++;
	}
	return (str);
}

char	*ft_itoa_base(long int n, int base)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(*str) * 12);
	i = 0;
	while (i < 12)
	{
		str[i] = '\0';
		i++;
	}
	i = 0;
	if (base != 10)
		return (ft_convert((unsigned int)n, base, str, i));
	else
		return (ft_convert(n, base, str, i));
}

/*void    flag_ashtag()
{
    if (list->dieze == 1 && list->conv_o == 1)
        ft_putchar('0')
    if (list->dieze == 1 && list->conv_x == 1)
        write(1,"0x",2);
    if (list->dieze == 1 && list->conv_X == 1)
        write(1,"0X",2);
}

void    flag_zero()
{
    if()
}*/

char    *ft_app_precision(t_printf *list)
{
    int i;
    int k;
    int j;
    int t;
    int ex = 0;
    char *tmp;

    i = 0;   
    j = ft_strlen(list->str);
    k = list->precision;
    t = 0;
    //printf("||+++%s+++||\n",list->str);
    if (k > j)
        t = j;
    else
        t = k;
    if (!(tmp = (char*)ft_memalloc(t + 1)))
        return (0);        
    tmp[t] = '\0';
    while (i < t)
    {
        ex++;
        tmp[i] = list->str[i];
        i++;
    }    
    //printf("||+++%s+++|| ex == %d||\n",tmp,ex);    
    //printf("j ===== %d  k ===== %d list->str =====%s\n",j,k,tmp);
    return (tmp);
}

char    *ft_app_taille_cham(t_printf *list)
{
    /* ATTENTION gerer si la taille de champ est superieur a strlen(list->str)
        */
    int k;
    int i;
    int j;
    int t;
    char *tmp;

    t = 0;
    i = 0;
    j = ft_strlen(list->str);
    k = list->taille_cham;
   // printf("\nj ==== %d  || k ===== %d taille ===== %d\n",j,k,list->taille_cham);
    if (j > k)
        t = j;
    else
        t = k;                                                                                                                                                                                                       
    if (!(tmp = (char*)malloc((sizeof(char) * (t + 1)))))
        return (0);
    tmp[t] = '\0';
    k = list->taille_cham - j; //le nombre d'espace
   // printf("j ===== %d  k ===== %d list->str =====%s\n",j,k,list->str);
   
    if (j < t)
    {
        //printf("PROUT\n");
      //  printf("||str == %s||\n",list->str);
        while (i < k)
        {
            if (list->zero == 1)
                tmp[i] = '0';
            else
                tmp[i] = ' ';
            i++;
        }
        k = 0;
  // printf("||str == %s||\n",list->str);    
   
    
        while (i < list->taille_cham)
        {
            //printf("||%c||\n",tmp[i]);
            tmp[i] = list->str[k];
            i++;
            k++;
        }
    }
    else
    {
        k = 0;
        while (i < j)
        {
            tmp[i] = list->str[k];
            i++;
            k++;
        }
    }
   // ft_putnbr(ft_strlen(tmp));
    //printf("i == %d\n",i);
   // printf("\ntmp == %s taille === %d \n",tmp, ft_strlen(tmp));
    return (tmp);
}

int     ft_taille_cham(char *format, int *i, t_printf *list)
{
    int j;
    int k;
    int t;
    char *tmp;

    j = *i;
    k = 0;
    while (ft_isdigit(format[*i]) == 1)
    {
       // printf("TAILLE *i == %d  formar[i] == %c\n",*i,format[*i]);
        (*i)++;
    }
    if (list->moins == 1)
        k = 1;
    t = (*i - j) + k;
    if (!(tmp = (char*)ft_memalloc(sizeof(*tmp) * (t + 1))))
        return (0);
    //printf("t == %d *i == %d  k === %d j === %d\n",t,*i,k,j);
    if (k == 1)
       tmp[0] = '-';
    while (k < t)
    {
       // printf("format[j] =====> %c",format[j]);
        tmp[k] = format[j];
        k++;
        j++;
    }
    j = ft_atoi(tmp);
   // printf("VALEUR DE LA TAIILE D CHAM %s",tmp);
    free(tmp);
    return (j);

}

int     ft_taille_precision(char *format, int *i, t_printf *list)
{
    int j;
    int k;
    int t;
    char *tmp;

    j = *i;
    k = 0;
    t = 0;
    while (ft_isdigit(format[*i]) == 1)
    {
       // printf("PRECI  *i == %d  formar[i] == %c\n",*i,format[*i]);
        (*i)++;
    }
    if (list->moins == 1)
        k = 1;
    t = (*i - j) + k;
    if (!(tmp = (char*)ft_memalloc(sizeof(*tmp) * (t + 1))))
        return (0);
    //printf("t == %d *i == %d  k === %d j === %d\n",t,*i,k,j);
    if (k == 1)
        tmp[0] = '-';
    while (k < t)
    {
        tmp[k] = format[j];
        k++;
        j++;
    }
    j = ft_atoi(tmp);
    //printf("j ==== %d",j);
    free(tmp);
    return (j);

}

int     ft_flag_parce(char *format, int i, t_printf *list)
{
    if (format[i] == '#')
        list->dieze = 1;
    else if (format[i] == ' ')
        list->aq_aq = 1;
    else if (format[i] == '+')
        list->plus = 1;
    else if (format[i] == '-')
        list->moins = 1;
    else if (format[i] == '0')
        list->zero = 1;
    return (0);
}

int   ft_flag_cast(va_list *args, t_printf *list)
{

    if (list->flag_hh == 1)
    {
        list->cast_flag = (signed char)va_arg(*args, long long int);
        return (1);
    }
    else if (list->flag_ll == 1)
    {
        list->cast_flag = (long long)va_arg(*args, long long int);
        return (1);
    }
    else if (list->flag_h == 1)
    {
        list->cast_flag = (short)va_arg(*args, long long int);
        return (1);
    }
    else if (list->flag_l == 1)
    {
        list->cast_flag = (long)va_arg(*args, long long int);
        return (1);
    }
    else if (list->flag_j == 1)
    {
        list->cast_flag = (intmax_t)va_arg(*args, long long int);
        return (1);
    }
    else if (list->flag_z == 1)
    {
        list->cast_flag = (size_t)va_arg(*args, long long int);
        return (1);
    }
    else
    {
        list->entier = (int)va_arg(*args, long long int);
        return (0);
    }
    return (2);
}

int    ft_structur_conv(t_printf *list)
{
    if (list->conv_d == 1)
        return (1);
    if (list->conv_i == 1)
        return (2);
    if (list->conv_o == 1)
        return (3);
    if (list->conv_u == 1)
        return (4);
    if (list->conv_s == 1)
        return (5);
    if (list->conv_c == 1)
        return (6);
    if (list->conv_p == 1)
        return (7);
    if (list->conv_X == 1)
        return (8);
    if (list->conv_U == 1)
        return (9);
     if (list->conv_O == 1)
        return (10);
    if (list->conv_S == 1)
        return (11);
    if (list->conv_C == 1)
        return (12);
    if (list->conv_x == 1)
        return (13);
    return (0);
}

int    ft_printf(const char *format, ...)
{
    int i;

    i = 0;
    t_printf *list;
    va_list args;
    list = (t_printf*)ft_memalloc(sizeof(t_printf));
    va_start (args,format);
    
    while (format[i] != '\0')
    {
       // ft_putstr("Entre de la 1er boucle \\0\n");
        
        if (format[i] == '%' && format[i + 1] == '%')
        {
            ft_putchar(format[i]);
            i += 2;
        }
        if (format[i] != '%') 
            ft_putchar(format[i]);
        //ft_putchar(format[i]);
        //ft_putchar('\n');
            if (format[i] == '%')
            {
               //ft_putstr("Entre du 1er if %%\n");
                ft_memset(list, 0,sizeof(t_printf));
            //    ft_putstr("Sortie de memset\n");
                while (format[i] != 'd' || format[i] != 'i' || format[i] != 'o' ||
                format[i] != 'u' || format[i] != 'x' || format[i] != 's' || format[i] != 'c' ||
                format[i] != 'p' || format[i] != 'X' || format[i] != 'U' || format[i] != 'O' ||
                format[i] != 'S' || format[i] != 'C')
                /*i++;
                while(!(ft_strchr("diouxscpXUOSC",format[i])))*/
                {
                   // ft_putchar(format[i]);
                    if ((format[i - 1] == '%' && format[i] == '#') || (format[i - 1] == '%' && format[i] == ' ' )||
                    (format[i - 1] == '%' && format[i] != '+') || (format[i - 1] == '%' && format[i] != '-') || (format[i - 1] == '%' && format[i] != '0'))
                    {
                       // ft_putstr("TROIS\n");
                        ft_flag_parce((char*)format, i, list);
                       // i++;
                    }
                    if ((ft_isdigit(format[i]) == 1 && format[i - 1] == '%' )|| (ft_isdigit(format[i]) == 1 && format[i - 2] == '%'))
                    {
                       // printf("UN\n");
                        list->champ = 1;
                        list->taille_cham = ft_taille_cham((char*)format, &i, list);
                         //probleme avec des espace ou qutre devant
                    }
                    if ((format[i] == '*' && format[i - 1] == '%') || (format[i] == '*' && format[i - 1] == '0'))
                    {
                        //printf("DEUX\n");
                        
                        list->champ = 1;
                        list->chetoile = 1;
                    }
                    if (format[i] == '.')
                    {
                        list->point = 1;
                        
                        if (format[i + 1] != '*')
                        {
                            i++;
                            list->precision = ft_taille_precision((char*)format, &i, list);
                        }
                        else
                        {
                            list->pretoile = 1;
                           // printf("TROIS\n");
                        }
                    }
                    if (format[i] == 'j' || format[i] == 'z' || format[i] == 'h' ||
                    format[i] == 'l')
                    {
                        if (format[i] == 'h' && format[i + 1] == 'h' )
                            list->flag_hh = 1;
                        if (format[i] == 'l' && format[i + 1] == 'l' )
                            list->flag_ll = 1;                    
                        if (format[i] == 'h' && format[i + 1] != 'h')
                            list->flag_h = 1;                    
                        if (format[i] == 'l' && format[i + 1] != 'l')
                            list->flag_l = 1;                    
                        if (format[i] == 'j')
                            list->flag_j = 1;                    
                        if (format[i] == 'z')
                            list->flag_z = 1;                    
                    }
                    if (format[i] == 'd' || format[i] == 'i' || format[i] == 'o' ||
                    format[i] == 'u' || format[i] == 'x' || format[i] == 's' || format[i] == 'c' ||
                    format[i] == 'p' || format[i] == 'X' || format[i] == 'U' || format[i] == 'O' ||
                    format[i] == 'S' || format[i] == 'C')
                    {
                        //ft_putstr("choix de la conversion\n");
                        if (format[i] == 'd')
                            list->conv_d = 1;
                        if (format[i] == 'i')
                            list->conv_i = 1;
                        if (format[i] == 'o')
                            list->conv_o = 1;
                        if (format[i] == 'u')
                            list->conv_u = 1;
                        if (format[i] == 'x')
                            list->conv_x = 1;
                        if (format[i] == 's')
                            list->conv_s = 1;
                        if (format[i] == 'c')
                            list->conv_c = 1;
                        if (format[i] == 'p')
                            list->conv_p = 1;
                        if (format[i] == 'X')
                            list->conv_X = 1;
                        if (format[i] == 'U')
                            list->conv_U = 1;
                        if (format[i] == 'O')
                            list->conv_O = 1;
                        if (format[i] == 'S')
                            list->conv_S = 1;
                        if (format[i] == 'C')
                            list->conv_C = 1;
                        break;
                    }
                    //printf("||pretoile == %d|| chetoile == %d||\n",i,list->pretoile);
                   // printf("DANS WHILE format[i] ==== %c\n\n",format[i]);
                   //printf("||%%s = %d||%%* = %d||%%. = %d||%%l = %d||%%pretoile = %d||\n",list->conv_s,list->chetoile,list->point,list->flag_l,list->pretoile);
                    i++;
                }
            }
        if (ft_structur_conv(list) == 1 || ft_structur_conv(list) == 2)
        {
            //printf("TAMERE2\n");
            
            char *tmp; //arranger le tmp en list->str
            //list->entier = va_arg(args,int);
            if (list->pretoile != 1 && list->chetoile != 1)
            {
                //printf("TAMERE3\n");
                
                if (ft_flag_cast(&args, list) == 1)
                    list->str = ft_itoa_base(list->cast_flag, 10);
                else
                    list->str = ft_itoa_base(list->entier, 10);
            // ft_putnbr(ft_strlen(list->str));
                tmp = ft_app_taille_cham(list);
                ft_putstr(tmp);
                free(list->str);
                free(tmp);
                ft_memset(list, 0,sizeof(t_printf));
            }
            else if (list->pretoile == 1 || list->chetoile == 1)
            {
                //printf("TAMERE1\n");
                if (list->chetoile == 1)
                {
                    list->taille_cham = va_arg(args, int);
                }
               /* if (list->point == 1)
                {
                    if (list->pretoile == 1)
                    {
                        list->precision = va_arg(args, int);
                        //printf("||prci %d||\n",list->precision);
                    }
                }*/
               // printf("||%d||\n",list->taille_cham);
                if (ft_flag_cast(&args, list) == 1)
                    list->str = ft_itoa_base(list->cast_flag, 10);
                else
                    list->str = ft_itoa_base(list->entier, 10);
               /* if (list->point == 1)
                {
                    tmp = ft_app_precision(list);
                //printf("||1str == %s||\n",tmp);                            
                
                    list->str = ft_strdup(tmp);
                    ft_strdel(&tmp);
                 }*/
                 tmp = ft_app_taille_cham(list);
                 ft_putstr(tmp);
                 free(list->str);
                 free(tmp);
                 ft_memset(list, 0,sizeof(t_printf));
            }
        }
        else if (ft_structur_conv(list) == 3)
        {
             //printf("TAMERE2\n");
            
             char *tmp; //arranger le tmp en list->str
             //list->entier = va_arg(args,int);
             if (list->pretoile != 1 && list->chetoile != 1)
             {
                 //printf("TAMERE3\n");
                 
                 if (ft_flag_cast(&args, list) == 1)
                     list->str = ft_itoa_base(list->cast_flag, 8);
                 else
                     list->str = ft_itoa_base(list->entier, 8);
             // ft_putnbr(ft_strlen(list->str));
                 tmp = ft_app_taille_cham(list);
                 ft_putstr(tmp);
                 free(list->str);
                 free(tmp);
                 ft_memset(list, 0,sizeof(t_printf));
             }
             else if (list->pretoile == 1 || list->chetoile == 1)
             {
                 //printf("TAMERE1\n");
                 if (list->chetoile == 1)
                 {
                     list->taille_cham = va_arg(args, int);
                 }
                /* if (list->point == 1)
                 {
                     if (list->pretoile == 1)
                     {
                         list->precision = va_arg(args, int);
                         //printf("||prci %d||\n",list->precision);
                     }
                 }*/
                // printf("||%d||\n",list->taille_cham);
                 if (ft_flag_cast(&args, list) == 1)
                     list->str = ft_itoa_base(list->cast_flag, 8);
                 else
                     list->str = ft_itoa_base(list->entier, 8);
                /* if (list->point == 1)
                 {
                     tmp = ft_app_precision(list);
                 //printf("||1str == %s||\n",tmp);                            
                 
                     list->str = ft_strdup(tmp);
                     ft_strdel(&tmp);
                  }*/
                  tmp = ft_app_taille_cham(list);
                  ft_putstr(tmp);
                  free(list->str);
                  free(tmp);
                  ft_memset(list, 0,sizeof(t_printf));
        }
        else if (ft_structur_conv(list) == 13)
        {
             //printf("TAMERE2\n");
            
             char *tmp; //arranger le tmp en list->str
             //list->entier = va_arg(args,int);
             if (list->pretoile != 1 && list->chetoile != 1)
             {
                 //printf("TAMERE3\n");
                 
                 if (ft_flag_cast(&args, list) == 1)
                     list->str = ft_itoa_base(list->cast_flag, 16);
                 else
                     list->str = ft_itoa_base(list->entier, 16);
             // ft_putnbr(ft_strlen(list->str));
                 tmp = ft_app_taille_cham(list);
                 ft_putstr(tmp);
                 free(list->str);
                 free(tmp);
                 ft_memset(list, 0,sizeof(t_printf));
             }
             else if (list->pretoile == 1 || list->chetoile == 1)
             {
                 //printf("TAMERE1\n");
                 if (list->chetoile == 1)
                 {
                     list->taille_cham = va_arg(args, int);
                 }
                /* if (list->point == 1)
                 {
                     if (list->pretoile == 1)
                     {
                         list->precision = va_arg(args, int);
                         //printf("||prci %d||\n",list->precision);
                     }
                 }*/
                // printf("||%d||\n",list->taille_cham);
                 if (ft_flag_cast(&args, list) == 1)
                     list->str = ft_itoa_base(list->cast_flag, 16);
                 else
                     list->str = ft_itoa_base(list->entier, 16);
                /* if (list->point == 1)
                 {
                     tmp = ft_app_precision(list);
                 //printf("||1str == %s||\n",tmp);                            
                 
                     list->str = ft_strdup(tmp);
                     ft_strdel(&tmp);
                  }*/
                  tmp = ft_app_taille_cham(list);
                  ft_putstr(tmp);
                  free(list->str);
                  free(tmp);
                  ft_memset(list, 0,sizeof(t_printf));
        }
        else if (ft_structur_conv(list) == 5)
        {
            char *tmp; //arranger le tmp en list->str
            //free(list->str);
            if (list->pretoile != 1 && list->chetoile != 1)
            {
                list->str = va_arg(args, char*); // modifier le putstr pour les structur
                if (list->point == 1)
                {
                    tmp = ft_app_precision(list);
                //printf("||1str == %s||\n",tmp);                            
                
                    list->str = ft_strdup(tmp);
                    ft_strdel(&tmp);
                }
                tmp = ft_app_taille_cham(list);
                ft_putstr(tmp);
                ft_strdel(&tmp);
                ft_memset(list, 0,sizeof(t_printf));
            }
            else if (list->pretoile == 1 || list->chetoile == 1)
            {
                //printf("LEPOTE\n");
                if (list->champ == 1)
                {
                    if (list->chetoile == 1)
                    {
                        list->taille_cham = va_arg(args, int); //======= penser au champ zero sur cette fonction
                       // printf("||tail %d||\n",list->taille_cham);
                    }
                    if (list->point == 1)
                    {
                        if (list->pretoile == 1)
                        {
                            list->precision = va_arg(args, int);
                            //printf("||prci %d||\n",list->precision);
                        }
                    }
                }
                list->str = va_arg(args, char*);
                if (list->point == 1)
                {
                    tmp = ft_app_precision(list);
                //printf("||1str == %s||\n",tmp);                            
                
                    list->str = ft_strdup(tmp);
                    ft_strdel(&tmp);
                }
                tmp = ft_app_taille_cham(list);
                ft_putstr(tmp);
                ft_strdel(&tmp);
                ft_memset(list, 0,sizeof(t_printf));
            }
        }
        //fair une fonction qui reuni toute les informations/traite et affiche
        i++;
    }
    va_end(args);
    return (0);
}