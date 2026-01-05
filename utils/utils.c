
#include "push_swap.h"

void    ft_error(char *str)
{
    ft_putendl_fd(str, 1);
    exit(0);
}

void    ft_free_str_array(char **str)
{
    int i;

    i = 0;
    while (str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
}

void    ft_free_stack(t_list **stack)
{
    t_list  *node;
    t_list  *temp_node;

    node = *stack;
    while (node)
    {
        temp_node = node->next;
        free(node);
        node = temp_node;
    }
    free(stack);
}
