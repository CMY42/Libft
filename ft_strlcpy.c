/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:53:38 by cmansey           #+#    #+#             */
/*   Updated: 2022/10/26 14:50:45 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*dt;
	const char	*sc;
	int			i;

	i = 0;
	dt = dst;
	sc = src;
	if (dstsize > 0)
	{
		while (sc[i] != '\0')
		{
			if (i == dstsize)
			{
				i--;
				break ;
			}
			dt[i] = sc[i];
			i++;
		}
	}
	dt[i] = '\0';
	while (sc[i] != '\0')
		i++;
	return (i);
}

/*int main (int argc, char **argv)
{
	printf("%lu\n",(ft_strlcpy(argv[1], argv[2], 5)));
	printf("%lu\n",(strlcpy(argv[1], argv[2], 5)));
}*/
