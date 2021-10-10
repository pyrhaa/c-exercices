#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet(void)
{
    char c = 'a';
    int i;
    i = 97;
    
    while (i <= 'z')
    {   
        write(1, &c, 1);
        c++;
        i++;
    }
}

int main()
{
    ft_print_alphabet();
    return 0;
}