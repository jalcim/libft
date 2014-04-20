/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/20 06:42:28 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 23:23:46 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/mman.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_alloc t_alloc;
struct s_alloc
{
	void *data;
	size_t size;
	t_alloc *next;
	t_alloc *prev;
};

void ft_bzero(void *s, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_malloc(size_t size);
void ft_free(void *ptr);
t_alloc *save(t_alloc *liste);

void *ft_malloc(size_t size)
{
	t_alloc *memory;
	t_alloc *prev;

	memory = (t_alloc *)mmap(NULL, sizeof(t_alloc), PROT_WRITE, MAP_PRIVATE | MAP_ANON, -1, 0);
	memory->data = mmap(NULL, size, PROT_WRITE, MAP_PRIVATE | MAP_ANON, -1, 0);
	memory->next = save(NULL);
	memory->size = size;
	if (memory->next)
	{
		prev = memory;
		memory = memory->next;
		memory->prev = prev;
		memory = prev;
	}
	save(memory);

	return (memory->data);
}

void ft_free(void *ptr)
{
	t_alloc *data;
	t_alloc *tmp;

	if (!(data = save(NULL)))
	{
		write(1, "no data mallocked\n", 18);
		return ;
	}
	while (ptr != data->data && data->next)
		data = data->next;
	if (ptr == data->data)
	{
		if (data->prev && data->next)
		{
			data->prev->next = data->next;
			data->next->prev = data->prev;
		}
		else if (data->prev)
			data->prev->next = NULL;
		else if (data->next)
			data->next->prev = NULL;

		tmp = data;
		if (!tmp->prev)
			save(tmp->next);
		else
		{
			while (tmp->prev)
				tmp = tmp->prev;
			save(tmp);
		}

		ft_bzero(data->data, data->size);
		munmap(data->data, data->size);
		munmap(data, sizeof(t_alloc));
		return ;
	}
	write(1, "error\n", 6);
}

t_alloc *save(t_alloc *liste)
{
	static t_alloc *sliste = NULL;

	if (!liste)
		return (sliste);
	sliste = liste;
	return (NULL);
}
