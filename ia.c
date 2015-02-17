/*
** ia.c for ia in /home/semon_l/allum1_bootstrap
**
** Made by luc semon
** Login   <semon_l@epitech.net>
**
** Started on  Wed Feb 11 16:30:52 2015 luc semon
** Last update Tue Feb 17 15:59:02 2015 luc semon
*/

#include "allum1.h"

int	rand_or_not()
{
  int	rand_or_not;

  rand_or_not = 0;
  while (42)
    {
      my_putstr("|WHO_START| Random(1) or your choice(2)?\n");
      rand_or_not = my_atoi(get_next_line(0));
      if (rand_or_not == 1 || rand_or_not == 2)
	return (rand_or_not);
    }
}

int	first_player()
{
  int	first;

  first = 0;
  while (42)
    {
      my_putstr("|2-WHO_START| Who's the first player? You(1), IA(2)\n");
      first = my_atoi(get_next_line(0));
      if (first == 1 || first == 2)
	return (first);
    }
}

int	random_ia()
{
  srand(time(NULL));
  if ((rand() % 2) == 1)
    return(1);
  else
    return(0);
}

int	ia(int *l)
{
  int	i;
  int	r;

  i = 0;
  r = line(l);
  ia_2(l, r, i);
}

int	ia_2(int *l, int r, int i)
{
  while (i < 6)
    {
      if (l[i] != 0 && r >= 2)
	{
	  rmv(l, i);
	  return (EXIT_SUCCESS);
	}
      if (l[i] > 1)
	{
	  my_rmv(l, i);
	  return (EXIT_SUCCESS);
	}
      if (r == 1)
	{
	  if (l[i] == 1)
	    {
	      rmv(l, i);
	      my_putstr("\nGg, you win !\n");
	      exit (0);
	    }
	}
      i++;
    }
}
