/*
** allum1.h for .h in /home/semon_l/allum1_bootstrap
**
** Made by luc semon
** Login   <semon_l@epitech.net>
**
** Started on  Wed Feb 11 11:22:40 2015 luc semon
** Last update Mon Feb 16 12:36:42 2015 luc semon
*/

#ifndef _ALLUM1_H_
# define _ALLUM1_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	my_atoi(char *);
void	my_putchar(char);
char	my_putstr(char *);
int	my_strlen(char *);
int	x_malloc(unsigned int);
void	x_free(void *);
void	dis_round(int);
void	dis_game(int *);
int	rand_or_not();
int	first_player();
int	random_ia();
int	ia(int *);
int	ia_2(int *, int, int);
int	match(int *, int);
void	round_set(int *, int, int);
int	move_2(int *);
int	move_1(int *);
int	choice_1(int *);
int	line(int *);
int	rmv(int *, int);
int	my_rmv(int *, int);

#endif /* _ALLUM1_H_ */
