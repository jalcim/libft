/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:00:35 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 05:04:57 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(const char *src);

char	*ft_strcat(char *dest, const char *src)
{
	int		size_d;
	int		compt;

	compt = -1;
	size_d = ft_strlen (dest);
	if (!dest || !src)
		return (0);
	while (src[++compt] != '\0')
		dest[size_d + compt] = src[compt];
	dest[size_d + compt] = '\0';
	return (dest);
}
