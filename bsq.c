/*
** bsq.c for aze in /home/ovsepi_l/rendu/CPE-2013-BSQ
** 
** Made by Ludovic Ovsepian
** Login   <ovsepi_l@epitech.net>
** 
** Started on  Mon Dec  2 14:14:20 2013 Ludovic Ovsepian
** Last update Sat Dec  7 16:17:35 2013 Ludovic Ovsepian
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"

void	init_tab(t_square *struc)
{
  struc->x = 0;
  struc->y = 0;
  struc->x_bsq = 0;
  struc->y_bsq = 0;
  struc->len_square = 0;
}

void	square_sizes(char **map, int *check, int len, t_square *struc)
{
  int	i;

  i = 0;
  while ((struc->xdest = X + len) && (X - len + i) <= struc->xdest)
    if (map[Y - len][X - len + i++] == 'o')
      *check = 1;
  i = 0;
  while ((struc->ydest = Y + len) && (Y - len + i) <= struc->ydest)
    if (map[Y - len + i++][X + len] == 'o')
      *check = 1;
  i = 0;
  struc->xdest = X - len;
  while (X + len - i >= struc->xdest)
    if (map[Y + len][X + len - i++] == 'o')
      *check = 1;
  i = 0;
  struc->ydest = Y - len;
  while (Y + len - i >= struc->ydest)
    if (map[Y + len - i++][X - len] == 'o')
      *check = 1;
}

void	check_square(char **map, t_square *struc)
{
  int	len;
  int	check;

  check = 0;
  len = 0;
  while (check == 0 && Y - len >= 0 && map[Y][X + len] != '\0' && ERROR)
    {
      square_sizes(map, &check, len, struc);
      if (check == 0)
	len++;
    }
  len--;
  if (len > struc->len_square)
    {
      struc->len_square = len;
      struc->x_bsq = X;
      struc->y_bsq = Y;
    }
}

void	bsq(char **map, t_square *struc)
{
  while (map[Y] != NULL)
    {
      check_square(map, struc);
      X++;
      if (map[Y][X] == '\0')
	{
	  Y++;
	  X = 0;
	}
    }
}

int		main(int ac, char **av)
{
  char		*tab;
  int		fd;
  char		**map;
  t_square	struc;
  int		i;

  if ((i = 0) == 0 && ac > 1)
    {
      fd = open(av[1], O_RDONLY);
      if ((tab = get_fd(fd, tab)) == NULL || fd == -1)
	return (0);
      while (tab[i++] != '\n');
      if ((map = my_str_to_wordtab2(&tab[i])) == NULL)
	return (0);
      free(tab);
      init_tab(&struc);
      bsq(map, &struc);
      show_bsq(map, &struc);
      my_show_wordtab(map);
      i = 0;
      while (map[i] != NULL)
	free(map[i++]);
      free(map);
    }
  return (0);
}
