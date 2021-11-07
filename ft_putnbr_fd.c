#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{	
			n = -n;
			ft_putchar_fd('-', fd);
		}
		if (n < 10)
		{
			ft_putchar_fd(n + 48, fd);
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd(n % 10 + 48, fd);
		}
	}
}
