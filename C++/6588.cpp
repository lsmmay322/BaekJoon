#include <iostream>
#include <math.h>
using namespace std;

int	ft_decimal(int n)
{
	if (n == 1)
		return (0);
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

int main()
{
	int n, j, i;

	while (1)
	{
		scanf("%d", &n);
		if (n == 0)
			break;
		for (i = 3; i <= n / 2; i += 2)
		{
			j = n - i;
			if (ft_decimal(i) && ft_decimal(j))
			{
				printf("%d = %d + %d\n", n, i, j);
				break;
			}
		}
		if (i > n)
			printf("Goldbach's conjecture is wrong.\n");
	}
	return (0);
}
