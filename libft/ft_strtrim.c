/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 14:11:44 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/14 14:14:55 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_malloc(unsigned int size);
char *ft_strcpy (char *dest, const char *src);
int ft_strlen (const char *src);

char *ft_strtrim(char const *s)
{
  char *cp;

  if (!(cp = ft_malloc(ft_strlen(s))))
    return (NULL);
  ft_strcpy(cp, (char *)s);

  return (cp);
}
