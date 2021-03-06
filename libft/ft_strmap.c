/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 22:54:44 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/14 14:09:30 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_malloc(unsigned int size);
int ft_strlen(const char *src);

char *ft_strmap(const char *s, char (*f)(char))
{
  int compt;
  char *s2;

  compt = -1;
  s2 = (char *)ft_malloc((ft_strlen(s) + 1) * sizeof(char));
  while (s[++compt] != '\0')
    s2[compt] = (*f)(s[compt]);

  return (s2);
}
