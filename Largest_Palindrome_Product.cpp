#include <iostream>
using namespace std;

int	is_palindrome(int n)
{
	int	reverse = 0;
	int	tmp = n;

	while (tmp > 0)
	{
		reverse = reverse * 10 + (tmp % 10);
		tmp /= 10;
	}
	return (n == reverse);
}

int	main()
{
	int	a, b;
	int	product;
	int	max_pal = 0;

	for (a = 100; a <= 999; a++)
	{
		for (b = 100; b <= 999; b++)
		{
			product = a * b;
			if (is_palindrome(product) && product > max_pal)
				max_pal = product;
		}
	}
	cout << max_pal << endl;
	return (0);
}
