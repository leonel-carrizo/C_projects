#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char* str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
{
	if (str[i] >= 97 && str[i] <= 122)
	i++;
	else
	return (0);
	}
	return (1);
}

int		main(void)
{
	char str2[] = "Hi";

	ft_str_is_lowercase(str2);
	return (0);
}