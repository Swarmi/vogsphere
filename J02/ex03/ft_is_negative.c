#include <unistd.h>


void	ft_is_negative(int n);

		

int	main(void)
{
	int a;
	a = 0;
	ft_is_negative(a);
	write(1, "\n", 1);
	return (0);
}

void	ft_is_negative(int n)
{	
	if ( 0 > n )
	{
		write (1, "N", 1);
	}
	else
	{ 
		write (1, "P", 1);
	}
}
