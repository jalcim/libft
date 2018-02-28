/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 03:20:38 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 05:09:39 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *dest, const void *src, unsigned int size)
{
  int compt;
  unsigned char	*s1;
  unsigned char	*s2;

  if (dest && src && size)
    {
      compt = 0;
      s1 = (unsigned char *)dest;
      s2 = (unsigned char *)src;
      while (size--)
	{
	  if (s1[compt] != s2[compt])
	    return ((int)(s1[compt] - s2[compt]));
	  compt++;
	}
    }
  return (0);
}

