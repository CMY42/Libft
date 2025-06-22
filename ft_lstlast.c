/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 17:56:12 by cmansey           #+#    #+#             */
/*   Updated: 2025/06/22 18:05:25 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
    if (lst == NULL)
        return (NULL);
    while (lst->next != NULL)
        lst = lst->next;
    return (lst);
}

/*
int main(void)
{
    // Cas 1 : Liste vide
    t_list *empty = NULL;
    printf("Dernier (vide): %p (attendu: NULL)\n", (void *)ft_lstlast(empty));

    // Cas 2 : Liste à un élément
    t_list *single = ft_lstnew("Unique");
    printf("Dernier (1 élément): %s\n", (char *)ft_lstlast(single)->content);

    // Cas 3 : Liste à plusieurs éléments
    t_list *n1 = ft_lstnew("A");
    t_list *n2 = ft_lstnew("B");
    t_list *n3 = ft_lstnew("C");
    n1->next = n2;
    n2->next = n3;

    t_list *last = ft_lstlast(n1);
    printf("Dernier (plusieurs): %s\n", (char *)last->content);

    // Libération mémoire
    free(single);
    free(n1);
    free(n2);
    free(n3);

    return 0;
}*/