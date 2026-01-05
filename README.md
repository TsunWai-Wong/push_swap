# push_swap

Functions
### main.c
main
- check_args(int argc, str **argv)
- initialize_stacks




### check_args.c
Helper Function - is_number(chr *str): +/-ddddd
Helper Function - contain_repeat_num(int num, char **argv, int i): whether the num at current index repeated with the nums following it
check_args(int argc, char **argv)
- if argc < 2 return error
- if argc == 2
    - char ** args = split_by ' '
- else if argc >= 2, char ** args = argv
- for each str in args:
    - call is number and contain_repeat_num
    - check exceeding INT_MAX or INT_MIN
- free if split is used
- return ()

initialize_stacks(t_list **stack, int argc, char **argv)
- new_member = lst_new(atoi)
- lst_addback(new_member)


### utils.c
Helper Function: ft_error(char *msg)
- putstr(msg)
- exit(0)
Helper Function: ft_issorted(t_list **stack)
- if cur->content > cur->next->content, return (0)
- return (1)

### push_operations.c

### swap_operations.c

### rotate_operations.c

### rotate_operations.c

Detail Explanations
sa: swap first two nodes (header and the one next)
pb: remove head of A and add it as head of B
ra: move head to tail
rra: move tail to head
### swap_operations.c
sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one element or none.
sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one element or none.
ss : sa and sb at the same time.

### push_operations.c
pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.

### rotate_operations.c
ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
rr : ra and rb at the same time.

### reverse_rotate_operations.c
rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
rrr : rra and rrb at the same time.