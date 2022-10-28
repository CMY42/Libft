/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:47:08 by cmansey           #+#    #+#             */
/*   Updated: 2022/10/28 17:04:45 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str;
	char	*strdst;
	size_t	i;

	str = (char *)src;
	strdst = (char *)dst;
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
		strdst[i] = str[i];
		i++;
		}
	}
	else
	{
		while (i != len)
		{
			strdst[len - i - 1] = str[len - i - 1];
			i++;
		}
	}
	return (dst);
}

/*int main(int argc, char **argv)
{
	printf("%s\n",(memmove(argv[1], argv[2], 4)));
	printf("%s\n",(ft_memmove(argv[1], argv[2], 4)));
}*/
