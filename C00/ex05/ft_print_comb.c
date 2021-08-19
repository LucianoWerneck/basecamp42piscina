#include <unistd.h>
void	printwrite(char first_number, char second_number, char thrid_number);

void	ft_print_comb(void)
{
	char    first_number;
	char	second_number;
	char	thrid_number;

	first_number = '0'; 
	while (first_number <= '9')
	{	
		second_number = first_number + 1;
		while (second_number <= '9')
		{
			thrid_number = second_number + 1;
			while (thrid_number <= '9')
			{
				printwrite(first_number, second_number, thrid_number);
				thrid_number++;
			}
			second_number++;
		}
		first_number++;
	}
}

void	printwrite(char first_number, char second_number, char thrid_number)
{
	write (1, &first_number, 1);
	write (1, &second_number, 1);
	write (1, &thrid_number, 1);
	if (first_number != '7')
	{
		write (1, ", ", 2);
	}
}
