#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr( int nb)
{
	int i;

	i = 0;

	if( nb > 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	if ( nb == -2147483648)
	{
		write(1, "-2147483648", 12);
	
	}
	if ( nb < 0)
	{
		ft_putchar ('-');
		nb = -nb;
	}
	if ( nb > 10 )
	{
		ft_putnbr(nb/10);
		ft_putnbr(nb%10);
	}
}

int main()
{
	ft_putnbr(7852);
}

