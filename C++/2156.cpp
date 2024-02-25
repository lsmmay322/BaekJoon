#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX(a, b) (a > b) ? a : b

int dp[10001];

int main()
{
	int n;
	int* arr;
	int res = 0;
	scanf("%d", &n);
	arr = (int*)malloc(sizeof(int) * (n + 1));

	for (int i = 0; i <= n; i++)
	{
		if (i == 0)
		{
			arr[i] = 0;
			dp[0] = arr[i];
		}
		else
			scanf("%d", &arr[i]);

	}
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];

	for (int i = 3; i <= n; i++)
	{
		dp[i] = MAX(dp[i - 2] + arr[i], arr[i] + arr[i - 1] + dp[i - 3]);
		dp[i] = MAX(dp[i], dp[i - 1]);
	}
	printf("%d", dp[n]);
	free(arr);
	return 0;
}
