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

	while(nb > 9 || nb != 0)
	{
		ft_putchar('0' + (a % 10));
		nb = a / 10;
	}
	ft_putchar(nb);
}

int main()
{
	ft_putnbr(0);
	return 0;
}