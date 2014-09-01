/*
** my_str_to_wordtab.c for zef in /home/ovsepi_l/rendu/Piscine-C-Jour_08/ex_04
** 
** Made by Ludovic Ovsepian
** Login   <ovsepi_l@epitech.net>
** 
** Started on  Fri Oct 11 11:37:38 2013 Ludovic Ovsepian
** Last update Sat Dec  7 11:36:12 2013 Ludovic Ovsepian
*/

#include <stdlib.h>
#include "my.h"

int	count_letters2(char *str, int i)
{
  int	nb;

  nb = 0;
  while (str[i] != '\n' && str[i] != '\0')
    {
      nb = nb + 1;
      i = i + 1;
    }
  return (nb);
}

int	count_words2(char *str)
{
  int	nb;
  int	i;

  i = 0;
  nb = 1;
  while (str[i] != '\0')
    {
      if (str[i] != '\n' && str[i - 1] == '\n' && i != 0)
	{
	  nb = nb + 1;
	}
      i = i + 1;
    }
  return (nb);
}

void	add_word2(char **tab, int *i, char *str, t_square *struc)
{
  tab[struc->ytab][struc->xtab] = str[*i];
  *i = *i + 1;
  struc->xtab = struc->xtab + 1;
}

char		**my_str_to_wordtab2(char *str)
{
  int		i;
  char		**tab;
  int		nb_letters;
  t_square	struc;

  struc.xtab = 0;
  i = 0;
  struc.ytab = 0;
  if ((tab = malloc(sizeof(char*) * (count_words2(str) + 1))) == 0)
    return (NULL);
  while (struc.ytab < count_words2(str))
    {
      nb_letters = count_letters2(str, i);
      if ((tab[Y2] = malloc(sizeof(char) * (count_letters2(str, i) + 1))) == 0)
	return (NULL);
      while (struc.xtab < nb_letters)
	add_word2(tab, &i, str, &struc);
      tab[struc.ytab][struc.xtab] = '\0';
      struc.xtab = 0;
      struc.ytab = struc.ytab + 1;
      i++;
    }
  tab[struc.ytab] = '\0';
  return (tab);
}
