#include <unistd.h>

void ft_print_reverse_alphabet(void)

{
	int a;
	a='z';

	while ( a >='a') 
        {
		write (1, &a, 1);
		a--;
	}
}
int	main()
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return (0);
}
