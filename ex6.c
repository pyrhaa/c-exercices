#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }

void ft_print_comb2(void) {
    char a = '0';
    char b = '0';
    char c = '0';
    char d = '1';


    while (a <= '9')
    {
        while (b <= '8')
        {
            while (c <= '9')
            {
                while (d <= '9')
                {
                    ft_putchar(a);
                    ft_putchar(b);
                    ft_putchar(' ');
                    ft_putchar(c);
                    ft_putchar(d);
                    ft_putchar(',');
                    ft_putchar(' ');
                    d++;
                }
                c++;
                d= '0' + 1;
            }
            b++;
            c= '0';
        }
        a++;
    }
    
    
}

int main() {
  ft_print_comb2();
  return 0;
}