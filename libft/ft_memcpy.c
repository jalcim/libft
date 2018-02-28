/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:20:49 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 05:11:36 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, const void *src, unsigned int n)
{
  unsigned int compt;
  unsigned char	*s1;
  unsigned char	*s2;

  s1 = (unsigned char *)dest;
  s2 = (unsigned char *)src;
  compt = -1;
  while (++compt < n)
    s1[compt] = s2[compt];

  return ((void *)dest);
}
