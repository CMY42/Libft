/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmansey <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 16:53:23 by cmansey           #+#    #+#             */
/*   Updated: 2025/06/23 19:31:12 by cmansey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
int main(void)
{
    t_list *list = ft_lstnew("Hello");
    list->next = ft_lstnew("World");
    list->next->next = ft_lstnew("!");

    void print_content(void *content)
    {
        printf("%s\n", (char *)content);
    }

    ft_lstiter(list, print_content);

    // Clean up the list
    ft_lstclear(&list, free);
    return 0;
}
*/