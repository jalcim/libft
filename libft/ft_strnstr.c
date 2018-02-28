/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 23:05:17 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/14 14:42:11 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strlen(const char *src);

char *ft_strnstr(const char *s1, const char *s2, unsigned int size)
{
  unsigned int compt_s1;
  unsigned int compt_s2;
  unsigned int size_s2;

  size_s2 = ft_strlen(s2);
  compt_s1 = 0;
  compt_s2 = 0;
  while (s1[compt_s1] && compt_s1 < size)
    {
      if (!s1[0] || !s2[0])
	return ((char *)s1);
      else if (s1[compt_s1] == s2[compt_s2])
	{
	  if (((compt_s2 + 1) == size_s2))
	    return ((char *)(s1 + (compt_s1 - compt_s2)));
	  compt_s2++;
	}
      else
	compt_s2 = 0;
      compt_s1++;
    }
  return (NULL);
}
