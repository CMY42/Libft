/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 17:36:40 by cmansey           #+#    #+#             */
/*   Updated: 2025/06/23 19:29:04 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*int main(void)
{
    // Cas 1: Liste vide
    t_list *empty_list = NULL;
    printf("Taille liste vide: %d (attendu: 0)\n", ft_lstsize(empty_list));

    // Cas 2: Liste avec 1 élément
    t_list *single_node = ft_lstnew("Hello");
    printf("Taille liste 1 élément: %d (attendu: 1)\n", ft_lstsize(single_node));
    free(single_node); // Nettoyage mémoire
    
    // Cas 3: Liste avec 3 éléments
    t_list *node1 = ft_lstnew("A");
    t_list *node2 = ft_lstnew("B");
    t_list *node3 = ft_lstnew("C");
    
    // Construction de la liste
    node1->next = node2;
    node2->next = node3;
    
    printf("Taille liste 3 éléments: %d (attendu: 3)\n", ft_lstsize(node1));

    // Cas 4: Test après suppression d'un élément
    node2->next = NULL; // On ne garde que 2 éléments
    printf("Taille après modification: %d (attendu: 2)\n", ft_lstsize(node1));

    // 5. Nettoyage mémoire
    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/