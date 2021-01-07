#include <iostream>
#include <stdlib.h>
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
	int n;
	int* arr;
	int cnt = 0;

	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (ft_decimal(arr[i]))
			cnt++;
	}
    free(arr);
	cout << cnt;
}
