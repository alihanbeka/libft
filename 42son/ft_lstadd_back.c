/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_back.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: ebeka <ebeka@student.42istanbul.com.tr>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/08/17 16:18:09 by ebeka            #+#    #+#              */
/*   Updated: 2026/08/17 22:02:27 by ebeka           ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

int	main(void)
{
	t_list	*lst;
	t_list	*temp;

	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew("Ali"));
	ft_lstadd_back(&lst, ft_lstnew("Veli"));
	ft_lstadd_back(&lst, ft_lstnew("Ayse"));
	temp = lst;
	while (temp != NULL)
	{
		printf("%s\n", (char *) temp->content);
		temp = temp->next;
	}
	return (0);
}
