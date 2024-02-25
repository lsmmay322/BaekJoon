#include <iostream>
using namespace std;

unsigned long arr[1002];

unsigned long	ft_count(int size)
{
	arr[1] = 1;
	arr[2] = 3;
	int i = 3;
	unsigned long val;
	while (i <= size)
	{
		arr[i] = (arr[i - 1] + arr[i - 2] * 2) % 10007;
		i++;
	}
	val = arr[size];
	return val;
}

int main()
{
	int n;
	cin >> n;

	cout << ft_count(n) << endl;
	return (0);
}
