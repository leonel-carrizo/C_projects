#include <unistd.h>

char	ft_strcpy(char* dest, char* src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		{
		dest[i] = src[i];
		i++;
		}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char str1[] = "luna";
	char str2[] = "hellogoodbye";

	ft_strcpy(str1, str2);

	return (0);
}
// https://www.tutorialspoint.com/c_standard_library/c_function_strcpy.htm