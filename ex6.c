#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_char_number(int nb1, int nb2)
{
	ft_putchar(nb1 / 10 + 48);
	ft_putchar(nb1 % 10 + 48);
	ft_putchar(' ');
	ft_putchar(nb2 / 10 + 48);
	ft_putchar(nb2 % 10 + 48);
}

void ft_print_comb2(void)
{
	int nb1 = 0;
	int nb2 = 0;

	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_char_number(nb1, nb2);
			if(nb1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nb2++;
		}
		nb1++;
	}
}

int main()
{
	ft_print_comb2();
	return 0;
}