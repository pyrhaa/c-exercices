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

    while (a < b < c)
    {
        while(c <= '9' && b <= '8')
        {
            c++;
            if(c == '9')
            {
                b++;
                c = b + 1;
            }
            if(c == '9' && b == '8')
            {
                a++;
            }
        }

        b = a + 1;
        c = a + 1;
        ft_putchar(a);
        ft_putchar(b);
        ft_putchar(c);
        ft_putchar(',');
        ft_putchar(' ');
    }
    ft_putchar('\n');
}

int main()
{
    ft_print_comb();
    return 0;
}