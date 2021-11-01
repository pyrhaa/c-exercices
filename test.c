#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if(nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		nb = nb / 10 + '0';
		ft_putchar(nb);
		nb = nb % 10 + '0';
		ft_putchar(nb);
	}

}

int main()
{
	ft_putnbr(42);
	ft_putchar('\n');
	return 0;
}