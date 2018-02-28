/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/17 01:13:13 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 05:28:53 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void *ft_malloc(unsigned int size);
static int nb_str(char *s, char c);

char **ft_strsplit(char const *s, char c)
{
  char **str;
  char *start;
  char *end;
  int size;
  int compt;

  start = (char *)s;
  size = nb_str(start, c);
  str = (char **)ft_malloc(sizeof(char *) * (size + 1));
  str[size] = NULL;
  start = (char *)s;
  (end = start, compt = -1);
  while (end != '\0' && ++compt < size)
    {
      end = start;
      while (*end != c && end != '\0')
	end++;
      if ((end - start) > 0)
	{
	  str[compt] = (char *)ft_malloc(end - start);
	  strncpy(str[compt], start, (end - start));
	}
      start = (end + 1);
    }
  return (str);
}

static int nb_str(char *s, char c)
{
  int compt;

  compt = 1;
  while (*s != '\0')
    {
      if (*s == c)
	compt++;
      s++;
    }
  return (compt);
}
