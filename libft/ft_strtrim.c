/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 14:11:44 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/14 14:14:55 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*cp;

	if (!(cp = malloc(ft_strlen(s))))
		return (NULL);
	ft_strcpy(cp, (char *)s);

	return (cp);
}
