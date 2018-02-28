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

void ft_putendl_fd(const char *str, int fd);
void ft_putstr_fd(const char *str, int fd);

int ft_atoi(const char *buf)
{
  int nb;
  int compt;

  nb = 0;
  compt = -1;
  while (buf[++compt] && buf[compt] != '\n')
    {
      if (buf[compt] > '9' || buf[compt] < '0')
	{
	  ft_putstr_fd("ft_atoi bad argument:\t", 2);
	  ft_putendl_fd(buf, 2);
	}
      else
	nb = (nb * 10) + (buf[compt] - '0'); 
    }
  return (nb);
}
