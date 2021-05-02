#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while(str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int main()
{
	char len = ft_strlen("halooo") + '0';
	write(1, &len, 1);
}