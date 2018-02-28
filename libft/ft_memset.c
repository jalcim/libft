/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:03:03 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 05:12:25 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *source, int rempl, unsigned int size)
{
  unsigned char	*s1;

  s1 = (unsigned char *)source;
  while (size--)
    *s1++ = rempl;

  return (source);
}
