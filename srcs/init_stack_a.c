

#include "push_swap.h"

t_stack_node	*find_last(t_stack_node *a)
{
	if (!a)
		return ;
	while (a->next)
		a = a->next;
	return (a);
}

static void	append_node(t_stack_node **a, int n)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (!a)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (!node)
		return ;
	node->nbr = n;
	node->index = -1;
	node->next = NULL;
	if (!(*a))
	{
		*a = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last(*a);
		last_node->next = node;
		node->prev = last_node;
	}
}

void	init_stack_a(t_stack_node **a, int *numbers, int len)
{
	int i;

	i = 0;
	while (i < len)
	{
		append_node(a, numbers[i]);
		i++;
	}
}
