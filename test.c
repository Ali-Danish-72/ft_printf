#include "ft_printf.h"

int main()
{
	int i = -0x80000000;
	int j = ft_print_address(&i);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(j, 1);
	return(0);
}