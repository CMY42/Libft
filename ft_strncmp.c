/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:03:49 by cmansey           #+#    #+#             */
/*   Updated: 2022/10/28 14:41:29 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	while ((s1[a] != '\0' || s2[a] != '\0') && a < n)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
			a++;
	}
	return (0);
}

/*int main (int argc, char **argv)
{
	printf("%d\n", (ft_strncmp(argv[1], argv[2], 5)));
	printf("%d\n", (strncmp(argv[1], argv[2], 5)));
}*/
