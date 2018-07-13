/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 16:36:04 by jalcim            #+#    #+#             */
/*   Updated: 2018/07/13 16:36:04 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

typedef struct s_data t_data;
struct s_data
{
  unsigned int *offset;
  void *memory;
  int nb_elem;
};

t_data *_create_data(unsigned int *size_elem, int nb_elem);
void *access_data(t_data *data, int elem);
void *_destroy_data(t_data *data);

#define char_access_data(data, elem)   *((char*)access_data(data, elem))
#define short_access_data(data, elem)   *((short*)access_data(data, elem))
#define int_access_data(data, elem)   *((int*)access_data(data, elem))
#define long_access_data(data, elem)   *((long*)access_data(data, elem))
#define float_access_data(data, elem)   *((float*)access_data(data, elem))
#define double_access_data(data, elem)   *((double*)access_data(data, elem))

#define uchar_access_data(data, elem)   *((unsigned char*)access_data(data, elem))
#define ushort_access_data(data, elem)   *((unsigned short*)access_data(data, elem))
#define uint_access_data(data, elem)   *((unsigned int*)access_data(data, elem))
#define ulong_access_data(data, elem)   *((unsigned long*)access_data(data, elem))
#define ufloat_access_data(data, elem)   *((unsigned float*)access_data(data, elem))
#define udouble_access_data(data, elem)   *((unsigned double*)access_data(data, elem))
/*
int main()
{
  t_data *data;
  int size_elem[8] = {8, 4, 2};

  data = _create_data(size_elem, 8);

  short_access_data(data, 2) = 900;
  int_access_data(data, 1) = 70000;
  long_access_data(data, 0) = 5000000;

  printf("%d\n%d\n%ld\n", short_access_data(data, 2),
         int_access_data(data, 1),
         long_access_data(data, 0));

  _destroy_data(data);
  return (0);
}
*/
inline void *access_data(t_data *data, int elem)
{
  return  ((data->nb_elem > elem) ? (data->memory + data->offset[elem]) : (NULL));
}

t_data *_create_data(unsigned int *size_elem, int nb_elem)
{
  int cpt = -1;
  t_data *data = (t_data *)malloc(sizeof(t_data));
  int size = 0;

  data->offset = (int *)malloc(nb_elem * sizeof(int));
  while(++cpt < nb_elem)
    {
      data->offset[cpt] = size;
      size += size_elem[cpt];
    }
  data->memory = malloc(size);
  data->nb_elem = nb_elem;
  return (data);
}

void *_destroy_data(t_data *data)
{
  free(data->offset);
  free(data->memory);
  free(data);

  return (NULL);
}
