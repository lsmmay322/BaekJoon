#include <iostream>
using namespace std;
int DP[1001] = { 0, };

int check_max(int* arr)
{
	int max = arr[1];
	for (int i = 2; i <= 1001; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return (max);
}

int main()
{
	int n;
	int arr[1001];

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	for (int i = 1; i <= n; i++)
		DP[i] = arr[i];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (arr[j] < arr[i] && DP[i] < DP[j] + arr[i])
				DP[i] = DP[j] + arr[i];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d ", DP[i]);
	}
	int max = check_max(DP);
	printf("%d", max);
}
