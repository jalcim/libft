/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 12:20:46 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/14 13:01:57 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*nb;
	int		compt;
	int		tmp;
	int		save;

	nb = (char *)malloc(1000);
	compt = -1;
	tmp = 1;
	save = n;
	while (tmp)
	{
		tmp = save;
		tmp /= 10;
		save = tmp;
		++compt;
	}
	ft_bzero(nb, 1000);
	while (compt > -1)
	{
		nb[compt] = (n % 10) + '0';
		n /= 10;
		compt--;
	}
	return (nb);
}
