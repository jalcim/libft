/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:20:48 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 05:19:47 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	ft_memdel(void **ap)
{
	int compt;

	compt = -1;
	while (ap[++compt])
	{
		free(ap[compt]);
		ap[compt] = NULL;
	}
	free(ap);
	ap = NULL;
}
