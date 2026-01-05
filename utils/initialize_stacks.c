
#include "push_swap.h"

int initialize_stacks(t_list **stack, int argc, char **argv)
{
    int     i;
    char    **args;
    t_list  *new_node;

    i = 0;
    if (argc == 2)
        args = ft_split(argv[1], ' ');
    else
    {
        args = argv;
        i = 1;
    }
    while(args[i])
    {
        new_node = ft_lstnew(ft_atoi(args[i]));
        ft_lstadd_back(stack, new_node);
        i++;
    }
    if (argc == 2)
        ft_free_str_array(args);
    return (0);
}