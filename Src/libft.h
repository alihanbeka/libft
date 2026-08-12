#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

typedef struct s_list
{
	void* content;
	struct s_list* next;
}	t_list;

t_list* ft_lstnew(void* content);
t_list* ft_lstlast(t_list* lst);
void	ft_lstadd_back(t_list** lst, t_list* new);

#endif