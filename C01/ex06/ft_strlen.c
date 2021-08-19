/*#include <stdio.h>
int ft_strlen(char *str);

int main (void)
{
	int result;

	result = ft_strlen("Camila");
	printf("%i", result);
	return (0);
}*/

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;

	return(i);
}

