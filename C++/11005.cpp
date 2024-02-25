#include <iostream>
using namespace std;

void ft_change(int n, int b)
{
	int a;

	if (n >= b)
	{
		a = n / b;
		ft_change(a, b);
	}
	if (n % b >= 10)
		printf("%c", 'A' + (n % b) - 10);
	else
		printf("%d", n % b);
}

int main()
{
	int n, b;
	cin >> n >> b;

	ft_change(n, b);
	return (0);
}
