/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:01:29 by cmansey           #+#    #+#             */
/*   Updated: 2025/06/23 19:39:27 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	size_t			total_size;
	size_t			i;
	unsigned char	*byte_ptr;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (size > SIZE_MAX / count)
		return (NULL);
	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	byte_ptr = ptr;
	i = 0;
	while (i < total_size)
	{
		byte_ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/*int main(void)
{
	int *arr = ft_calloc(5, sizeof(int));
	if (arr == NULL)
	{
		printf("Allocation failed\n");
		return 1;
	}
	
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]); // print 0 0 0 0 0
	
	free(arr);
	return 0;
}*/