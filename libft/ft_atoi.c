/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 11:42:53 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/14 13:55:01 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *buf);

int		ft_atoi(const char *buf)
{
	int nb;
	int compt;

	nb = 0;
	compt = -1;
	while (buf[++compt])
	{
		nb *= 10;
		nb += (buf[compt] - '0');
	}

	return (nb);
}
