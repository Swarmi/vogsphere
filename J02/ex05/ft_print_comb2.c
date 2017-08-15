#include <unistd.h>

void ft_print_comb2(void);

int main (void)
{


	ft_print_comb2();
	write (1, "\n", 1);
	return (0);

	
}


void ft_print_comb2(void)
{

	int a;
	int b;
	int c;
	int d;

	a = '0';/*mille*/
	b = '0';/*centaines*/
	c = '0';/*dizaine*/
	d = '0';/*unite*/


	while ( a <= '9' )
	{
		if ( b < d )
		{
			write (1, &a, 1);
			write (1, &b, 1);
			write (1," ", 1);
			write (1, &c, 1);
			write (1, &d, 1);
			write (1,",",1);
			write (1, " ", 1);

		}
		if (a == '9')
		{
			if (b == '7')
			{
				b ++;
				if (b == '8')
				{
					b ++;
				}
				else
				{
					d++;
					if ( d > '9' )
					{
						c++;
						d = '0';
						if ( c > '9' )
						{
							b++;
							c = '0';
							if ( b > '9' )
							{
								a++;
								b = '0';
							}
						}	
					}
				}
			}
			else
			{
				d++;
				if ( d > '9' )
				{
					c++;
					d = '0';
					if ( c > '9' )
					{
						b++;
						c = '0';
						if ( b > '9' )
						{
							a++;
							b = '0';
						}
					}
				}
			}
		}
		else
		{
			d++;
			if ( d > '9' )
			{
				c++;
				d = '0';
				if ( c > '9' )
				{
					b++;
					c = '0';
					if ( b > '9' )
					{
						a++;
						b = '0';
					}
				}
			}
		}
	}
}	
