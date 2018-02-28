/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:27:32 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 04:57:55 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_malloc(unsigned int size);
int ft_strlen(const char *src);

char *ft_strdup(const char *str)
{
  int compt;
  char *dest;

  if (!(dest = (char *)ft_malloc(ft_strlen(str) * sizeof(char))))
    return (NULL);

  compt = -1;
  while (str[++compt] != '\0')
    dest[compt] = str[compt];
  dest[compt] = '\0';

  return (dest);
}
