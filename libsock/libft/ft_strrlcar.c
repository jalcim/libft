/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrlcar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 07:56:12 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 05:07:21 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strrlcar(char *buf, int c)
{
	int		size;
	int		compt;

	compt = 0;
	size = ft_strlen(buf);
    while (buf[size--] != c)
        compt++;
    return (compt);
}
