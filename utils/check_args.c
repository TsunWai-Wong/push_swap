
#include "push_swap.h"

static int is_number(char *str)
{
    int i;

    i = 0;
    if (!str || str[i] == '\0')
        return (0);
    if (str[i] == '+' || str[i] == '-')
        i++;
    if (str[i] == '\0')
        return (0);
    while (str[i])
    {
        if (!ft_isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

static int contain_repeat_num(int num, char **argv, int i)
{
    while (argv[i])
    {
        if (num == ft_atoi(argv[i]))
            return (1);
        i++;
    }
    return (0);
}

int check_args(int argc, char **argv)
{
    int     i;
    char    **args;
    long     num;

    i = 0;
    if (argc < 2)
        exit(0);
    if (argc == 2)
        args = ft_split(argv[1], ' ');
    else
    {
        args = argv;
        i = 1;
    }
    while (args[i])
    {
        if (is_number(args[i]) == 0)
            ft_error("Error");
        num = ft_atoi(args[i]);
        if (num < -2147483648 || num > 2147483647)
            ft_error("Error");
        if (contain_repeat_num(num, args, i + 1))
            ft_error("Error");
        i++;
    }
    if (argc == 2)
        ft_free_str_array(args);
    return (1);
}
