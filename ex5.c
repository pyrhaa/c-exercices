//test git branch
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

    while (a <= '7')// a=6
    {
        while(b <= '8')// b=7
        {
            while (c <= '9') //c=10
            {
                ft_putchar(a);//a=6 6
                ft_putchar(b);//b=7 7
                ft_putchar(c);//c=8 9
                ft_putchar(',');
                ft_putchar(' ');
                c++;
            }
            b++;//b=8
            c= b + 1;//c=9
        }
        b= a + 1;//b=7
        a++;
    }
    
}


int main()
{
    ft_print_comb();
    return 0;
}