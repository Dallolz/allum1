/*
** match.c for match in /home/semon_l/allum1_bootstrap
**
** Made by luc semon
** Login   <semon_l@epitech.net>
**
** Started on  Mon Feb 16 10:16:36 2015 luc semon
** Last update Tue Feb 17 16:00:11 2015 luc semon
*/

#include "allum1.h"

int	match(int *l, int choice_l)
{
  int	r;
  int	nb;

  nb = 0;
  r = line(l);
  while (42)
    {
      my_putstr("How many matches would you like to remove ? ");
      nb = my_atoi(get_next_line(0));
      if (r == 1 && l[nb] == 1)
	{
	  my_putstr("\nYou loose !\n");
	  exit (0);
	}
      if (nb > 0 && nb <= l[choice_l])
	{
	  l[choice_l] = l[choice_l] - nb;
	  dis_game(l);
	  if (line(l) == 0)
	    my_putstr("\nYou loose !\n");
	  return (EXIT_SUCCESS);
	}
    }
}

void	round_set(int *l, int first, int rand)
{
  int	r;

  r = line(l);
  if (first == 1 || rand == 0)
    {
      while (r != 0)
	{
	  move_1(l);
	  move_2(l);
	  r = line(l);
	}
    }
  if (first == 2 || rand == 1)
    {
      while (r != 0)
	{
	  move_2(l);
	  move_1(l);
	  r = line(l);
	}
    }
}

int	move_2(int *l)
{
  int	r;

  r = line(l);
  if (r == 0)
    exit (0);
  my_putstr("\nPlayer 2 played:");
  if (r == 6)
    rmv(l, 0);
  if (r < 6)
    ia(l);
}

int	move_1(int *l)
{
  int	choice;

  choice = choice_1(l);
  match(l, choice);
}

int	choice_1(int *l)
{
  int	choice_l;

  choice_l = 1;
  while (42)
    {
      my_putstr("\n Which line do you choose? ");
      choice_l = my_atoi(get_next_line(0));
      if (choice_l > 0 && choice_l < 7 && l[choice_l -1] != 0)
	return (choice_l - 1);
    }
}
