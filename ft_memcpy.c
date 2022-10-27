/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:17:20 by cmansey           #+#    #+#             */
/*   Updated: 2022/10/25 14:46:48 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*str;
	char		*strdst;
	int			i;

	str = src;
	strdst = dst;
	i = 0;
	while (i < n)
	{
		strdst[i] = str[i];
		i++;
	}
	return (dst);
}

/*int main(int argc, char **argv)
{
	printf("%s\n",(memcpy(argv[1], argv[2], 7)));
	printf("%s\n",(ft_memcpy(argv[1], argv[2], 7)));
}*/
