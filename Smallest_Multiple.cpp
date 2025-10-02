#include <iostream>
using namespace std;

int	gcd(int a, int b)
{
	while (b != 0)
	{
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return (a);
}

long long	lcm(long long a, long long b)
{
	return (a / gcd(a, b)) * b;
}

int	main()
{
	long long	result = 1;

	for (int i = 1; i <= 20; i++)
		result = lcm(result, i);
	cout << result << endl;
	return (0);
}
