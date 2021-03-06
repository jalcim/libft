/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 01:23:10 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 05:13:44 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_malloc(unsigned int size);

void *ft_memcpy(void *dest, const void *src, unsigned int n);
void *ft_memmove(void *dest, const void *src, unsigned int size)
{
  unsigned char	*s1;
  unsigned char	*s2;
  unsigned char	*s3;

  s1 = (unsigned char *)dest;
  s2 = (unsigned char *)src;
  s3 = (unsigned char *)ft_malloc (size * sizeof(unsigned char));
  ft_memcpy(s3, s2, size);
  ft_memcpy(s1, s3, size);

  return (dest);
}
