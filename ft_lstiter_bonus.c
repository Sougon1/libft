
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (lst != NULL && f != NULL)
	{
		while (lst != NULL)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
