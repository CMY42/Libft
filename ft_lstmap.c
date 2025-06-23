/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:13:44 by cmansey           #+#    #+#             */
/*   Updated: 2025/06/23 19:48:58 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
			return (ft_lstclear(&new_list, del), NULL);
		new_node = ft_lstnew(new_content);
		if (!new_node)
			return (del(new_content), ft_lstclear(&new_list, del), NULL);
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*
int main(void)
{
    t_list *list = ft_lstnew(strdup("Hello")); // strdup pour allocation
    ft_lstadd_back(&list, ft_lstnew(strdup("World")));
    
    t_list *mapped_list = ft_lstmap(list, &strdup, &free); // Utilise strdup
    
    if (!mapped_list) // Vérifier si la liste mappée est NULL
        printf("Erreur dans ft_lstmap!\n");
    else 
    {
        t_list *current = mapped_list;
        while (current)
        {
            printf("%s\n", (char *)current->content);
            current = current->next;
        }
    }
    
    ft_lstclear(&list, &free);
    ft_lstclear(&mapped_list, &free);
    
    return 0;
}
*/