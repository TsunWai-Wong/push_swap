
#include "push_swap.h"

static int push(t_list **stack1, t_list **stack2)
{
    t_list  *temp_node;

    if (!stack2 || !*stack2)
        return (0);
    temp_node = *stack2;
    *stack2 = (*stack2)->next;
    temp_node->next = *stack1;
    *stack1 = temp_node;
    return (1);
}

int pa(t_list **stack_a, t_list **stack_b)
{
    if (push(stack_a, stack_b) == 0)
        return (0);
    ft_putendl_fd("pa", 1);
    return (1);
}

int pb(t_list **stack_b, t_list **stack_a)
{
    if (push(stack_b, stack_a) == 0)
        return (0);
    ft_putendl_fd("pb", 1);
    return (1);
}