/*
** my_atoi.c for my_atoi in /home/semon_l/allum1_bootstrap
**
** Made by luc semon
** Login   <semon_l@epitech.net>
**
** Started on  Wed Feb 11 11:18:44 2015 luc semon
** Last update Wed Feb 11 11:22:27 2015 luc semon
*/

#include "allum1.h"

int	my_atoi(char *str)
{
  int	nb;

  nb = 0;
  while (*str)
    {
      if (*str >= '0' && *str <= '9')
	{
	  nb *= 10;
	  nb += *str - '0';
	}
      else
	return (nb);
      str++;
    }
  return (nb);
}
