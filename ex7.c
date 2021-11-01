#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	int a = nb;

	if(nb == 0)
	{
		ft_putchar('0');
	}

	if(nb <= 9)
	{
		ft_putchar('0' + nb);
	}

	while(nb > 9)
	{
		nb = a / 10;
		ft_putchar('0' + (a % 10));
	}
}

int main()
{
	ft_putnbr(9);
	ft_putchar('\n');
	return 0;
}