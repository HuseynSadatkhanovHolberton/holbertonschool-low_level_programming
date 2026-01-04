#include "function_pointers.h"

/* prints name as-is */
void print_name_as_is(char *name)
{
    int i = 0;
    while (name[i])
    {
        _putchar(name[i]);
        i++;
    }
    _putchar('\n');
}

/* prints name in uppercase */
void print_name_uppercase(char *name)
{
    int i = 0;
    while (name[i])
    {
        char c = name[i];
        if (c >= 'a' && c <= 'z')
            c = c - 'a' + 'A';
        _putchar(c);
        i++;
    }
    _putchar('\n');
}

int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    return 0;
}

