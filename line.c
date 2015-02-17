/*
** line.c for line in /home/semon_l/allum1_bootstrap
**
** Made by luc semon
** Login   <semon_l@epitech.net>
**
** Started on  Mon Feb 16 09:52:39 2015 luc semon
** Last update Tue Feb 17 15:38:39 2015 luc semon
*/

#include "allum1.h"

int	line(int *l)
{
  int	i;
  int	j;

  i = 0;
  j = 6;
  while (i <= 6)
    {
      if (l[i] == 0)
	j--;
      i++;
    }
  return (j);
}

int	rmv(int *l, int i)
{
  l[i] = 0;
  dis_game(l);
  return (EXIT_SUCCESS);
}

int	my_rmv(int *l, int i)
{
  l[i] = 1;
  dis_game(l);
  return (EXIT_SUCCESS);
}
