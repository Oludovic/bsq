/*
** show.c for affichage bsq in /home/ovsepi_l/rendu/CPE-2013-BSQ
** 
** Made by Ludovic Ovsepian
** Login   <ovsepi_l@epitech.net>
** 
** Started on  Fri Dec  6 15:34:14 2013 Ludovic Ovsepian
** Last update Sat Dec  7 11:50:05 2013 Ludovic Ovsepian
*/

#include "my.h"

int	show_bsq(char **map, t_square *struc)
{
  int	len;
  int	i;

  i = 0;
  len = 0;
  while (len <= struc->len_square)
    {
      while ((ASSIGNX) && (struc->x_bsq - len + i) <= struc->xdest)
	map[struc->y_bsq - len][struc->x_bsq - len + i++] = 'X';
      i = 0;
      while ((ASSIGNY) && (struc->y_bsq - len + i) <= struc->ydest)
	map[struc->y_bsq - len + i++][struc->x_bsq + len] = 'X';
      i = 0;
      struc->xdest = struc->x_bsq - len;
      while (struc->x_bsq + len - i >= struc->xdest)
	map[struc->y_bsq + len][struc->x_bsq + len - i++] = 'X';
      i = 0;
      struc->ydest = struc->y_bsq - len;
      while (struc->y_bsq + len - i >= struc->ydest)
	map[struc->y_bsq + len - i++][struc->x_bsq - len] = 'X';
      i = 0;
      len++;
    }
}
