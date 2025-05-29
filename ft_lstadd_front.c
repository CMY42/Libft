/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:17:05 by cmansey           #+#    #+#             */
/*   Updated: 2025/05/29 13:30:03 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst && new) //pour gere le cas ou new est NULL et adresse lst pas valide
    {
        new->next = *lst;
        *lst = new;
    }
}

/*
int main(void)
{
    // Test 1: Ajout dans une liste non vide
    t_list *head = ft_lstnew("Node 2");
    t_list *new_node = ft_lstnew("Node 1");
    printf("=== Test 1 ===\n");
    ft_lstadd_front(&head, new_node);
    printf("Head content: %s (attendu: Node 1)\n", (char *)head->content);
    if (head->next)
        printf("Next content: %s (attendu: Node 2)\n", (char *)head->next->content);
    else
        printf("ERREUR: head->next est NULL\n");
    free(head->next); // Libère "Node 2"
    free(head);       // Libère "Node 1"

    // Test 2: Liste vide (head = NULL)
    t_list *empty_list = NULL;
    t_list *node3 = ft_lstnew("Node 3");
    printf("\n=== Test 2 ===\n");
    ft_lstadd_front(&empty_list, node3);
    if (empty_list)
    {
        printf("Head content: %s (attendu: Node 3)\n", (char *)empty_list->content);
        printf("Next: %p (attendu: NULL)\n", (void *)empty_list->next);
        free(empty_list);
    }
    else
        printf("ERREUR: Aucun noeud ajouté\n");

    // Test 3: new = NULL
    printf("\n=== Test 3 ===\n");
    ft_lstadd_front(&head, NULL); // Ne doit rien faire
    printf("Aucun crash = test réussi\n");

    return 0;
}
*/