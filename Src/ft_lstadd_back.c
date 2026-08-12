#include "libft.h"
#include <stddef.h>
#include <stdio.h>

void	ft_lstadd_back(t_list** lst, t_list* new)
{
	t_list* last;

	if (!lst || !new)
		return;
	if (*lst == NULL)
	{
		*lst = new;
		return;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

int	main(void)
{
	t_list* lst;
	t_list* temp;

	lst = NULL;

	ft_lstadd_back(&lst, ft_lstnew("Ali"));
	ft_lstadd_back(&lst, ft_lstnew("Veli"));
	ft_lstadd_back(&lst, ft_lstnew("Ayse"));

	temp = lst;
	while (temp != NULL)
	{
		printf("%s\n", (char*)temp->content);
		temp = temp->next;
	}
	return (0);
}