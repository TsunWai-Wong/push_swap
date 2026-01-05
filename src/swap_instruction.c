
#include "push_swap.h"

static int swap(t_list **stack)
{
    t_list  *temp_node;

    if (!stack || !*stack || !(*stack)->next)
        return (0);
    temp_node = (*stack)->next;
    (*stack)->next = temp_node->next;
    temp_node->next = *stack;
    *stack = temp_node;
    return (1);    
}

int	sa(t_list **stack_a)
{
    if (swap(stack_a) == 0)
        return (0);
    ft_putendl_fd("sa", 1);
    return (1);
}

int	sb(t_list **stack_b)
{
    if (swap(stack_b) == 0)
        return (0);
    ft_putendl_fd("sb", 1);
    return (1);
}

int	ss(t_list **stack_a, t_list **stack_b)
{
    if (swap(stack_a) == 0 || swap(stack_b) == 0)
        return (0);
    ft_putendl_fd("ss", 1);
    return (1);
}