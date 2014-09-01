/*
** my.h for seg in /home/ovsepi_l/rendu/CPE-2013-BSQ
** 
** Made by Ludovic Ovsepian
** Login   <ovsepi_l@epitech.net>
** 
** Started on  Mon Dec  2 15:26:17 2013 Ludovic Ovsepian
** Last update Sat Dec  7 11:55:11 2013 Ludovic Ovsepian
*/

#ifndef MY_H_
# define MY_H_
#define Y (struc->y)
#define X (struc->x)
#define Y2 (struc.ytab)
#define ASSIGNY (struc->ydest = struc->y_bsq + len)
#define ASSIGNX (struc->xdest = struc->x_bsq + len)
#define ERROR (X - len >= 0 && map[Y + len] != NULL)

char	*get_fd(int fd, char *tab);
char	**my_str_to_wordtab2(char *str);

typedef struct	s_square
{
  int		xtab;
  int		ytab;
  int		x;
  int		y;
  int		x_bsq;
  int		y_bsq;
  int		len_square;
  int		xdest;
  int		ydest;
}		t_square;

#endif /* !MY_H_ */
