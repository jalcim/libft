/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/20 06:42:28 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 07:09:52 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/mman.h>
#include <string.h>

void *ft_malloc(long long size)
{
	return (mmap(NULL, size, PROT_WRITE, MAP_PRIVATE | MAP_ANON, -1, 0));
}
