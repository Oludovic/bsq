/*
** my_show_wordtab.c for show wordtab in /home/ovsepi_l/rendu/Piscine-C-Jour_08/ex_05
** 
** Made by Ludovic Ovsepian
** Login   <ovsepi_l@epitech.net>
** 
** Started on  Fri Oct 11 17:18:58 2013 Ludovic Ovsepian
** Last update Mon Oct 21 18:29:24 2013 Ludovic Ovsepian
*/

int	my_show_wordtab(char **tab)
{
  int	y;

  y = 0;
  while (tab[y] != '\0')
    {
      my_putstr(tab[y]);
      my_putchar('\n');
      y = y + 1;
    }
  return (0);
}
