/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:43:24 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/14 12:16:17 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *src, size_t size)
{
	size_t	compt;
	char	*tab;

	compt = -1;
	tab = (char *) src;

	while (++compt < size)
		tab[compt] = 0;
}
