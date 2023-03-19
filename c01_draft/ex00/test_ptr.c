#include <unistd.h>

int	main(void)
{
	int	a;
	int	*ptr;

	a = 3;
	ptr = &a;
	write(1, ptr, 1);
	return (0);
}
