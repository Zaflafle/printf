else if (ft_structur_conv(list) == 5)
{
    char *tmp; //arranger le tmp en list->str
    //free(list->str);
   // list->str = va_arg(args, char*); // modifier le putstr pour les structur            
    if (list->champ == 1)
    {
        if (list->chetoile == 1)
        {
            list->taille_cham = va_arg(args, int);
        }
        list->str = va_arg(args, char*);
        tmp = ft_app_taille_cham(list);
        list->str = tmp;
        free(tmp);
    }
    if (list->point == 1)
    {
        if (list->pretoile == 1)
        {
            list->precision = va_arg(args, int);
        }
        list->str = va_arg(args, char*);
        tmp = ft_app_precision(list);           
    }
    ft_putstr(tmp);
    ft_strdel(&tmp);
    ft_memset(list, 0,sizeof(t_printf));
}
//fair une fonction qui reuni toute les informations/traite et affiche
i++;
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
            tmp = ft_app_precision(list->str, list->precision);
            list->str = tmp;
            free(tmp);
        }       
        tmp = ft_app_taille_cham(list);
        ft_putstr(tmp);
        ft_strdel(&tmp);
        ft_memset(list, 0,sizeof(t_printf));
    }
}

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

else if (list->pretoile == 1 && list->chetoile == 1)
{
    //printf("LAPOTE\n");
    if (list->champ == 1)
    {
        if (list->chetoile == 1)
        {
            list->taille_cham = va_arg(args, int);
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



NAME = libftprintf.a
CC = gcc
#CFLAGS = 
CFLAGS = -Wall -Werror -Wextra

LIBDIR = .
SRCDIR = /sources
OBJDIR = /obj
INCDIR = /includes\
	/libft/includes\

LIB = libft/libft.a
SRC = source.c \

DEVNAME = ft_printf
DEVMAIN = test.c

LIBS = $(addprefix $(LIBDIR)/, $(LIB))
LIBS_DIRS = $(sort $(dir $(LIBS)))

SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(patsubst %.c, %.o,$(SRC)))
OBJS_DIRS = $(sort $(dir $(OBJS)))

INCDIR += $(LIBS_DIRS)
INCS = $(addprefix -I , $(INCDIR))

TEMPNAME = $(addprefix $(OBJDIR)/, $(NAME))
DEVMAIN_OBJ = $(addprefix $(OBJDIR)/, $(patsubst %.c, %.o,$(DEVMAIN)))

all: $(NAME)
$(NAME): build $(LIBS) $(OBJS)
	@ar rc $(TEMPNAME) $(OBJS)
	@libtool -static -o $(NAME) $(TEMPNAME) $(LIBS)
	@ranlib $(NAME)
build:
	@mkdir -p $(OBJDIR)
	@mkdir -p $(OBJS_DIRS)
clean:
	@rm -f $(TEMPNAME)
	@rm -f $(LIBS)
	@rm -f $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all

dev: fclean build $(LIBS) $(OBJS) $(DEVMAIN_OBJ)
	@gcc -o $(DEVNAME) $(LIBS) $(OBJS) $(DEVMAIN_OBJ) $(INCS) $(CFLAGS)
	@./$(DEVNAME)

$(LIBDIR)/%.a:
	@make -s -C $(@D)
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@$(CC) -c -o $@ $< $(INCS) $(CFLAGS)