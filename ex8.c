#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_char_number(int nb)
{
	ft_putchar(nb / 10 + 48);
	ft_putchar(nb % 10 + 48);
}

void ft_print_combn(int n)
{
	while (n <= 89)
	{
		
	}
}

int main()
{
    ft_putchar('@');
    ft_putchar('\n');
    return 0;
}