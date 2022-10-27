/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:02:41 by cmansey           #+#    #+#             */
/*   Updated: 2022/10/25 13:04:38 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = b;
	while (len > 0)
	{
		*str = c;
		str++;
		len--;
	}
	return (b);
}

/*int main(int argc, char **argv)
{
	printf("%s\n",(memset(argv[1], '$', 7)));
	printf("%s\n",(ft_memset(argv[1], '$', 7)));
}*/
