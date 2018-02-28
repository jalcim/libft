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

void ft_free(void *ptr);

void ft_memdel(void **ap)
{
  int compt;

  compt = -1;
  while (ap[++compt])
    {
      ft_free(ap[compt]);
      ap[compt] = NULL;
    }
  ft_free(ap);
  ap = NULL;
}
