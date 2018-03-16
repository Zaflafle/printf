# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macuguen <macuguen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/30 22:29:02 by macuguen          #+#    #+#              #
#    Updated: 2018/02/28 18:08:43 by macuguen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all, re, fclean, clean, Youporn

NAME = libftprintf.a
CC = gcc
#CFLAGS = 
CFLAGS = -Wall -Wextra -g3

LIBDIR = ./libft/
SRCDIR = ./srcs/
OBJDIR = ./obj/
INCDIR = ./includes/
DEVNAME = UNICORN

MAIN = test.c 
# SLASH = /

SRC = source.c \
		ft_unicode.c \
		ft_itoa_base.c \
		ft_itoa_base_next.c \
		ft_app_preci.c \
		ft_app_cham.c \
		ft_app_cham_next.c \
		ft_app_cham_next_two.c \
		ft_app_cham_next_one.c \
		ft_taille_cham_preci.c \
		ft_utils.c \
		ft_utils_next.c \
		ft_flag_cast.c \
		ft_utils_next_one.c \
		ft_instruction_d_i.c \
		ft_instruction_d_i_no.c \
		ft_instruction_o.c \
		ft_instruction_o_no.c \
		ft_instruction_x.c \
		ft_instruction_x_no.c \
		ft_instruction_s.c \
		ft_instruction_s_no.c \
		ft_instruction_big_x.c \
		ft_instruction_big_o.c \
		ft_instruction_p.c \
		ft_instruction_unic.c \
		ft_instruction_unis.c \
		ft_instruction_c.c \
		ft_instruction_u.c \
		ft_instruction_big_u.c \
		ft_pourcent.c \
		ft_parceur.c \
		ft_parce_instruction.c 

OBJ = $(SRC:.c=.o)
OBJS = $(addprefix $(OBJDIR),$(OBJ))

LIB = libft.a
LIBS = $(addprefix $(LIBDIR), $(LIB))

TEMPNAME = $(addprefix $(OBJDIR), $(NAME))

all: $(NAME)
$(NAME): $(OBJDIR) $(LIBS) $(OBJS) $(INCS)
	ar rc $(TEMPNAME) $(OBJS)
	libtool -static -o $(NAME) $(TEMPNAME) $(LIBS)
	ranlib $(NAME)
	rm -f $(TEMPNAME)
$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o: $(SRCDIR)%.c $(INCS)
	$(CC) -c $< $(INCS) $(CFLAGS) -o $@
	# mv $@ $(OBJDIR)

 $(LIBDIR)%.a:
	make -C $(@D)

clean:
	make -s -C $(LIBDIR) clean
	rm -f $(LIBS)
	rm -f $(OBJS)
	rm -rf $(OBJDIR)
fclean: clean
	rm -f $(NAME)
re: fclean all

Youporn:
	rm -f $(DEVNAME)

$(DEVNAME):
	gcc $(CFLAGS) -I$(INCDIR) -L./ -lftprintf $(MAIN) -o $(DEVNAME) $(NAME)
	./$(DEVNAME)
