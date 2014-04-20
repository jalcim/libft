/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:02:43 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 05:11:15 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy (void *dest, const void *src, int c, size_t size)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	size_t				compt;

	compt = 0;
	if (dest && src && c && size)
	{
		s1 = (unsigned char *)dest;
		s2 = (unsigned char *)src;
		while (compt < size)
		{
			s1[compt] = s2[compt];
			compt++;
			if (s2[compt - 1] == c)
				return ((s1 + compt));
		}
	}
	return (NULL);
}
