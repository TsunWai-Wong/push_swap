#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


#include "../libft/libft.h"

int	    sa(t_list **stack_a);
int	    sb(t_list **stack_b);
int	    ss(t_list **stack_a, t_list **stack_b);
int     pa(t_list **stack_a, t_list **stack_b);
int     pb(t_list **stack_b, t_list **stack_a);
int     ra(t_list **stack_a);
int     rb(t_list **stack_b);
int     rr(t_list **stack_a, t_list **stack_b);
int     rra(t_list **stack_a);
int     rrb(t_list **stack_b);
int     rrr(t_list **stack_a, t_list **stack_b);

int     check_args(int argc, char** agrv);
void    ft_error(char *str);
void    ft_free_str_array(char **str);
void    ft_free_stack(t_list **stack);
int     initialize_stacks(t_list **stack, int argc, char **argv);

# endif