/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 04:01:21 by jalcim            #+#    #+#             */
/*   Updated: 2014/03/11 21:56:51 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy (char *dest, const char *src, unsigned int size)
{
  unsigned int compt;

  compt = -1;
  while (++compt < size && src[compt] != '\0')
    dest[compt] = src[compt];
  dest[compt] = '\0';

  return (dest);
}
