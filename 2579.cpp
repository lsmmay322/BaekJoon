#include <iostream>
#define MAX(a, b) (a > b) ? a : b
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int* arr = new int[n + 1];
	int* DP = new int[n + 1];
	for (int i = 0; i <= n; i++)
	{
		if (i == 0)
			DP[0] = 0;
		else
			scanf("%d", &arr[i]);
	}
	DP[1] = arr[1];
	DP[2] = DP[1] + arr[2];
	for (int i = 3; i <= n; i++)
	{
		DP[i] = MAX(DP[i - 2] + arr[i], arr[i] + arr[i - 1] + DP[i - 3]);
	}
	printf("%d", DP[n]);
	delete[] arr;
	delete[] DP;
	return (0);
}
