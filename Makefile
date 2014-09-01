##
## Makefile for zelkfnlzekf in /home/ovsepi_l/rendu/Piscine-C-lib/my
## 
## Made by Ludovic Ovsepian
## Login   <ovsepi_l@epitech.net>
## 
## Started on  Mon Oct 21 09:02:43 2013 Ludovic Ovsepian
## Last update Sat Dec  7 10:21:09 2013 Ludovic Ovsepian
##

SRCS	= 	bsq.c \
		read.c \
		my_str_to_wordtab.c \
		show.c \
		my_show_wordtab.c \
		my_putchar.c \
		my_putstr.c

OBJS	= $(SRCS:.c=.o)

NAME	= bsq

all: $(NAME)

$(NAME): $(OBJS)
	cc $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all
