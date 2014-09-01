/*
** my_putstr.c for putstr in /home/ovsepi_l/rendu/Piscine-C-Jour_04
** 
** Made by Ludovic Ovsepian
** Login   <ovsepi_l@epitech.net>
** 
** Started on  Thu Oct  3 09:09:14 2013 Ludovic Ovsepian
** Last update Thu Oct  3 16:38:54 2013 Ludovic Ovsepian
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
