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

#include <string.h>

void	*ft_memset(void *source, int rempl, size_t size)
{
	unsigned char	*s1;
	size_t			compt;

	compt = -1;
	s1 = (unsigned char *)source;
	while (++compt < size)
		s1[compt] = rempl;

	return (source);
}
