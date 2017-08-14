#include <unistd.h>

void ft_print_comb(void);
int main(void) 
{
	ft_print_comb();
	write(1, "\n", 1);
	return (0);	
}

void ft_print_comb(void)
{
	int a;
	int b;
	int c;
	

	a='0';/*centaines*/
	b='0';/*dizaines*/
	c='0';/*unites*/


	while ( a < '9' )
	{
		if ( a < b && b < c ) 
		{
			write (1, &a, 1);
			write (1, &b, 1);
			write (1, &c, 1);
			if (a == '7')
			{
				if (b == '8')
				{
				}
				else
				{
					write (1, ",",1);
					write (1, " ", 1);
				}
			}
			else
			{
				write (1, ",",1);
				write (1, " ", 1);
			}
		}
		c++;
		if (c > '9' )
		{
			b ++;
			c = '0';
			if (b > '9')
			{
				a++;
				b='0';
			}
		}
	}
}

