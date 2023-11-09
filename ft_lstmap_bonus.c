
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*new_lst;
	t_ist	*original_lst;
	void	*new_content;

	if (lst != NULL && f != NULL && del != NULL)
	{
		new_lst = NULL;
		original_lst = lst;
		while (original_lst != NULL)
		{
			new_content = f(original_lst->content);
			if(new_content == NULL)
			{
				ft_lstclear(&new_list, del);
				return (NULL);
			}
			ft_lstadd_back(&new_lst, ft_lstnew(new_content));
			original_lst = original_lst->next;
		}
		return (new_lst);
	}
	return (NULL);
}
