/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/20 21:41:08 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 22:01:18 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_alloc *save(t_alloc *liste);
void ft_free(void *ptr)
{
	t_data *data;

	if (!(data = save(NULL));
		{
			ft_putstr("no data malloced\n");
			return ;
		}
		while (ft_memcmp(ft_memcmp(ptr, data->data, data->size)))
		free()
}
