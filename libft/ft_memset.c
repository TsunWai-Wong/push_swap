/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tswong <tswong@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:56:11 by tswong            #+#    #+#             */
/*   Updated: 2025/11/25 17:12:52 by tswong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buffer_memory, int constant_byte, size_t num)
{
	int				i;
	unsigned char	*temp_pointer;

	i = 0;
	temp_pointer = buffer_memory;
	while (num > 0)
	{
		temp_pointer[i] = constant_byte;
		i++;
		num--;
	}
	return (buffer_memory);
}

/* void  *my_memset(void *b, int c, int len)
{
  int           i;
  unsigned char *temp_pointer = b;
  i = 0;
  while(len > 0)
    {
      *p = c;
      p++;
      len--;
    }
  return(b);
} */

/* 
Why do we create unsigned char *p = b; ? 
void * is a generic pointer type — it points to memory 
but C doesn’t know what type that memory contains.
So it cannot be dereferenced (*b) or incremented (b++).
To write bytes to memory, you must convert the pointer 
into a type that represents a byte.

Solutions:
Create a temporary pointer which point to the same addresses of the buffer memory
*/