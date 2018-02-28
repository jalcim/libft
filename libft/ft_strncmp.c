/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:02:48 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/14 14:44:40 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *s1, const char *s2, int size)
{
  int compt;

  compt = -1;
  while (s1[++compt] != '\0' && s1[compt] == s2[compt] && compt < (size - 1));
  return (s1[compt] - s2[compt]);
}
