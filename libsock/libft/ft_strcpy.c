/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:54:00 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 05:04:45 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	int		compt;

	compt = -1;
	while (src[++compt] != '\0')
		dest[compt] = src[compt];

	dest[compt] = '\0';
	return (dest);
}
