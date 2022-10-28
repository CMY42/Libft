/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:23:46 by cmansey           #+#    #+#             */
/*   Updated: 2022/10/28 14:41:44 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *) haystack);
	while (*haystack != '\0' && len > i)
	{
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *) haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int main ()
{
	char s1[] = "Hello my world";
	char s2[] = "my";
	printf("%s\n", (strnstr(s1, s2, 3)));
	printf("%s\n", (ft_strnstr(s1, s2, 3)));
}*/
