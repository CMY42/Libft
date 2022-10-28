/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:40:18 by cmansey           #+#    #+#             */
/*   Updated: 2022/10/28 14:42:06 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	while (*s != '\0')
		s++;
	s--;
	while (*s)
	{
		if (*s == c)
			return ((char *) s);
		s--;
	}
	return (NULL);
}

/*int main ()
{
	char *s = "Hello World World";
	printf("%s\n", (ft_strrchr(s, 'W')));
	printf("%s\n", (strrchr(s, 'W')));
}*/
