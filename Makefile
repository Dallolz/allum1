##
## Makefile for make in /home/semon_l/allum1_bootstrap
##
## Made by luc semon
## Login   <semon_l@epitech.net>
##
## Started on  Mon Feb 16 12:18:29 2015 luc semon
## Last update Mon Feb 16 12:41:08 2015 luc semon
##

RM	= rm -f

SRCS	= aux.c		\
	  main.c	\
	  ia.c		\
	  my_atoi.c	\
	  match.c	\
	  line.c	\
	  display.c	\
	  get_next_line.c

NAME	= allum1

CFLAGS	= -w -pedantic -ansi -Wall -Wextra -Werror

CC 	= cc

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re	: fclean all

.PHONY: all clean fclean re
