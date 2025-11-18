#include <unistd.h>

static void	put_char(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long long num;
	long long result;

	num = n;
	result = fd;
	// if (n == -2147483648)
	// {
	// 	write(fd, "-2147483648", 11);
	// 	return;
	// }
	if (n < 0)
	{
		put_char('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		put_char(n + '0', fd);
}