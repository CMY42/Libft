/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 12:55:34 by cmansey           #+#    #+#             */
/*   Updated: 2025/06/23 19:30:16 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*int main(void)
{
    int data = 42;
    t_list *node = ft_lstnew(&data);
    if (node)
    {
        printf("Content: %d\n", *(int *)node->content); // Affiche 42
        free(node);
    }
    return (0);
}*/

/*int main(void)
{
    t_list *node = ft_lstnew(NULL); // Content = NULL
    
    if (node)
    {
        printf("Test 1 (content=NULL):\n");
        printf("Node address: %p\n", (void *)node);
        printf("Content: %p (attendu: NULL)\n", node->content);
        printf("Next: %p (attendu: NULL)\n\n", (void *)node->next);
        free(node);
    }
    else
    {
        printf("Erreur d'allocation mémoire\n");
    }
    return 0;
}*/