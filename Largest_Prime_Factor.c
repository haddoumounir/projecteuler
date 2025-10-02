#include <stdio.h>

int	main(void)
{
	long	n;
	long	factor;

	n = 600851475143;
	factor = 2;
	while (n > 1)
	{
		if (n % factor == 0)
			n /= factor;
		else
			factor++;
	}
	printf("%ld\n", factor);
	return (0);
}
