/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 22:54:44 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/14 14:40:22 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_malloc(unsigned int size);
int ft_strlen(const char *src);

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
  unsigned int	compt;
  char *s2;

  s2 = NULL;
  if (s && f)
    {
      compt = -1;
      s2 = (char *)ft_malloc((ft_strlen(s) + 1) * sizeof(char));
      while (s[++compt] != '\0')
	s2[compt] = (*f)(compt, s[compt]);
    }

  return (s2);
}
