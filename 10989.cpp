#include <iostream>
using namespace std;

int main()
{
	int n, num;
	int arr[10001] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		arr[num]++;
	}
	for (int i = 0; i < 10001; i++)
	{
		for (int j = 1; j <= arr[i]; j++)
			cout << i << '\n';
	}
}
