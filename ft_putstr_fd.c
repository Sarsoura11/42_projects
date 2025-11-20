#include "libft.h"

static void ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return;
	while (*s)
	{
		ft_putchar(*s, fd);
		s++;
	}
}