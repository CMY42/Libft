/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 18:09:19 by cmansey           #+#    #+#             */
/*   Updated: 2025/06/22 18:25:05 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*last;

    if (!lst || !new) // verifies if lst or new is NULL
        return ;
    if (*lst == NULL) // si lst est NULL, new devient le premier élément
    {
        *lst = new;
        return ;
    }
    last = *lst; // cas ou lst n'est pas NULL on va chercher le dernier élément
    while (last->next != NULL)
        last = last->next;
    last->next = new;
}

/*// Fonction utilitaire pour afficher la liste
void print_list(t_list *lst) {
    int i = 0;
    while (lst) {
        printf("Noeud %d: %s\n", i, (char *)lst->content);
        lst = lst->next;
        i++;
    }
}

int main(void) 
{
    // Cas 1: Liste vide
    t_list *head = NULL;
    ft_lstadd_back(&head, ft_lstnew("Premier"));
    printf("=== Liste après premier ajout (vide) ===\n");
    print_list(head); // Doit afficher "Premier"

    // Cas 2: Ajout à une liste non vide
    ft_lstadd_back(&head, ft_lstnew("Deuxième"));
    ft_lstadd_back(&head, ft_lstnew("Troisième"));
    printf("\n=== Liste après deux ajouts ===\n");
    print_list(head); // Doit afficher 3 éléments

    // Cas 3: Test avec new = NULL
    ft_lstadd_back(&head, NULL);
    printf("\n=== Après ajout de NULL ===\n");
    print_list(head); // Doit afficher les 3 éléments (pas de changement)
    
    // Cas 4: Test avec lst = NULL
    ft_lstadd_back(NULL, ft_lstnew("Test")); // Ne doit rien faire

    // Libération mémoire
    while (head) {
        t_list *tmp = head->next;
        free(head);
        head = tmp;
    }
    return 0;
}
 */

