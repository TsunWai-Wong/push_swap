
#include "push_swap.h"

// for development
#include <stdio.h>

int main(int argc, char **argv)
{
    // t_list **stack_a;
    // t_list **stack_b;

    // check_args(argc, argv);
    // stack_a = malloc(sizeof(t_list **));
    // if (!stack_a)
    //     return (1);
    // stack_b = malloc(sizeof(t_list **));
    // if (!stack_b)
    //     return (1);
    
    // initialize_stacks(stack_a, argc, argv);
    // //t_list *node = *stack_a;
    // sa(stack_a);
    // printf("%d", (*stack_a)->content);
    // pb(stack_a, stack_b);
    // printf("%d", (*stack_b)->content);

    // ft_free_stack(stack_a);
    // ft_free_stack(stack_b);

    t_list *stack_a; 
    t_list *stack_b;
    
    stack_a = NULL;
    stack_b = NULL;

    check_args(argc, argv);

    initialize_stacks(&stack_a, argc, argv);

    sa(&stack_a);
    printf("%d\n", stack_a->content);

    pb(&stack_b, &stack_a);
    printf("%d\n", stack_b->content);

    ra(&stack_a);
    printf("%d\n", stack_a->content);
    // ft_free_stack(&stack_a);
    // ft_free_stack(&stack_b);

    rra(&stack_a);
    printf("%d\n", stack_a->content);

    return (0);
}