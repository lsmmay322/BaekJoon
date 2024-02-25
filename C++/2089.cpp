#include <iostream>
#include <vector>
using namespace std;

void ft_base(long long n)
{
	long long tmp, cpy_n;

	tmp = n % -2;
	if (tmp == 0 || n > 0)
		cpy_n = n / -2;
	else
		cpy_n = n / -2 + 1;
	if (n == -1)
	{
		printf("11");
		return;
	}
	if (n != 1)
		ft_base(cpy_n);
	if (tmp == -1)
		tmp *= -1;
	printf("%lld", tmp);
	return ;
}

int main()
{
	long long n;

	scanf("%lld", &n);

	if (n == 0)
		printf("0\n");
	else
		ft_base(n);
	return (0);
}
