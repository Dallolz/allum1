/*
** aux.c for aux in /home/semon_l/allum1_bootstrap
**
** Made by luc semon
** Login   <semon_l@epitech.net>
**
** Started on  Wed Feb 11 11:48:19 2015 luc semon
** Last update Mon Feb 16 12:36:23 2015 luc semon
*/

#include "allum1.h"

void	my_putchar(char c)
{
  write (1, &c, 1);
}

char	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int	x_malloc(unsigned int x)
{
  void	*y;

  if ((y = malloc(x)) == 0)
    {
      my_putstr("Not enough memory.\n");
      exit (EXIT_FAILURE);
    }
  return (y);
}

void	x_free(void *y)
{
  if (y)
    free(y);
}
