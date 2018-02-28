/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 04:15:08 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/14 14:48:48 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(const char *src);

char *ft_strncat(char * dest, const char *src, unsigned int size)
{
  unsigned int compt;
  unsigned int size_d;

  compt = -1;
  size_d = ft_strlen(dest);
  while (src[++compt] != '\0' && compt < size)
    dest[size_d + compt] = src[compt];
  dest[size_d + compt] = '\0';

  return (dest);
}
