/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:30:09 by cmansey           #+#    #+#             */
/*   Updated: 2022/10/26 15:38:22 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}
	return (NULL);
}

/*int main ()
{
	char *s = "Hello World";
	printf("%s\n", (ft_strchr(s, 'W')));
	printf("%s\n", (strchr(s, 'W')));
}*/
