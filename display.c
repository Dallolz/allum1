/*
** display.c for displa in /home/semon_l/allum1_bootstrap
**
** Made by luc semon
** Login   <semon_l@epitech.net>
**
** Started on  Wed Feb 11 16:21:04 2015 luc semon
** Last update Mon Feb 16 12:56:56 2015 luc semon
*/

#include "allum1.h"

void	dis_round(int nb_round)
{
  int	i;

  i = 0;
  while (i < nb_round)
    {
      my_putstr("|");
      i++;
    }
  my_putstr("\n");
}

void	dis_game(int *l)
{
  my_putstr("\n(1)        ");
  dis_round(l[0]);
  my_putstr("(2)       ");
  dis_round(l[1]);
  my_putstr("(3)      ");
  dis_round(l[2]);
  my_putstr("(4)     ");
  dis_round(l[3]);
  my_putstr("(5)    ");
  dis_round(l[4]);
  my_putstr("(6)   ");
  dis_round(l[5]);
  my_putstr("\n");
}
