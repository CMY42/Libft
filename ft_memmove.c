/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:47:08 by cmansey           #+#    #+#             */
/*   Updated: 2022/10/26 14:47:28 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*str;
	char		*strdst;
	int			i;

	str = src;
	strdst = dst;
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
		i = len - 1;
		while (i >= 0)
		{
		strdst[i] = str[i];
		i--;
		}
	}
	return (dst);
}

/*int main(int argc, char **argv)
{
	printf("%s\n",(memmove(argv[1], argv[2], 4)));
	printf("%s\n",(ft_memmove(argv[1], argv[2], 4)));
}*/
