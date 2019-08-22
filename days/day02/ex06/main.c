#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb);

int main(void) {
	ft_putnbr(-2147483648);
	return 0;
}
