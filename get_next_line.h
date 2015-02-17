/*
** get_next_line.h for get_next_line.h in /home/pras_m/rendu/syst_unix/PSU_2014_minishell1
**
** Made by Martin Pras
** Login   <pras_m@epitech.net>
**
** Started on  Thu Jan 22 16:17:33 2015 Martin Pras
** Last update Wed Feb 11 11:46:07 2015 luc semon
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

# define READ_MAX 5

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "allum1.h"

# define BUFF_SIZE 10

int	my_len(char *);
char	*my_realloc(char *, int);
char	*get_next_line(const int);
char	*get_next_word(const int);

#endif /* !GET_NEXT_LINE_H_ */
