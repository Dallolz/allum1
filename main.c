/*
** main.c for main in /home/semon_l/allum1_bootstrap
**
** Made by luc semon
** Login   <semon_l@epitech.net>
**
** Started on  Wed Feb 11 11:46:48 2015 luc semon
** Last update Tue Feb 17 16:15:19 2015 luc semon
*/

#include "allum1.h"

void	main()
{
  int	*l;
  int	first;
  int	rand;

  l = x_malloc(6);
  l[0] = 1;
  l[1] = 3;
  l[2] = 5;
  l[3] = 7;
  l[4] = 9;
  l[5] = 11;
  my_putstr("\n\tAllum1 : begin!\n");
  dis_game(l);
  if (rand_or_not() == 1)
    rand = random_ia();
  else
    first = first_player();
  round_set(l, first, rand);
  x_free(l);
}
