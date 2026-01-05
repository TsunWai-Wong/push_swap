
#include "push_swap.h"

static int reverse_rotate(t_list **stack)
{
    t_list  *temp_node;
    t_list  *last_node;

    if (!stack || !*stack || !(*stack)->next)
        return (0);
    last_node = ft_lstlast(*stack);
    temp_node = *stack;
    while (temp_node->next->next)
        temp_node = temp_node->next;
    temp_node->next = NULL;
    last_node->next = *stack;
    *stack = last_node;
    return (1);
}

int rra(t_list **stack_a)
{
    if (reverse_rotate(stack_a) == 0)
        return (0);
    ft_putendl_fd("rra", 1);
    return (1);
}

int rrb(t_list **stack_b)
{
    if (reverse_rotate(stack_b) == 0)
        return (0);
    ft_putendl_fd("rrb", 1);
    return (1);
}

int rrr(t_list **stack_a, t_list **stack_b)
{
    if (reverse_rotate(stack_a) == 0 || reverse_rotate(stack_b) == 0)
        return (0);
    ft_putendl_fd("rrr", 1);
    return (1);
}
