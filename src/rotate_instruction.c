
#include "push_swap.h"

static int rotate(t_list **stack)
{
    t_list  *temp_node;

    if (!stack || !*stack || !(*stack)->next)
        return (0);
    temp_node = *stack;
    *stack = temp_node->next;
    temp_node->next = NULL;
    ft_lstadd_back(stack, temp_node);
    return (1);
}

int ra(t_list **stack_a)
{
    if (rotate(stack_a) == 0)
        return (0);
    ft_putendl_fd("ra", 1);
    return (1);
}

int rb(t_list **stack_b)
{
    if (rotate(stack_b) == 0)
        return (0);
    ft_putendl_fd("rb", 1);
    return (1);
}

int rr(t_list **stack_a, t_list **stack_b)
{
    if (rotate(stack_a) == 0 || rotate(stack_b) == 0)
        return (0);
    ft_putendl_fd("rr", 1);
    return (1);
}