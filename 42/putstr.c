#include <unistd.h>

void	putstr(char *str)
{
	int index;
	
	index = 0;
	while(str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

int main()
{
    putstr("haloooo");
}