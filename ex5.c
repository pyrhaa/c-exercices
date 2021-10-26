#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    char a = '0';
    char b = '1';
    char c = '2';

    while (a <= '7')
    {
        while(b <= '8')
        {
            while (c <= '9')
            {
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                ft_putchar(',');
                ft_putchar(' ');
                c++;
            }
        
            b++;
            c= b + 1;
        
        }
    }
    
}


int main()
{
    ft_print_comb();
    return 0;
}