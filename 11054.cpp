#include <iostream>
using namespace std;

void	ft_free(int **DP, int *res, int *arr, int n) {
	for (int i = 0; i < 2; i++)
		delete[] DP[i];
	delete[] DP;
	delete[] res;
	delete[] arr;
}
int main()
{
	int n;
	int result = 0;
	scanf("%d", &n);
	int* arr = new int[n];
	int* res = new int[n];
	int** DP = new int*[2];
	for (int i = 0; i < 2; i++)
	{
		DP[i] = new int[n];
		for (int j = 0; j < n; j++)
		{
			if (i == 0)
				scanf("%d", &arr[j]);
			DP[i][j] = 1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i] && DP[0][j] >= DP[0][i])
				DP[0][i] = DP[0][j] + 1;
		}
	}
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = n-1 ; j > i ; j--)
			if (arr[j] < arr[i] && DP[1][j] >= DP[1][i])
				DP[1][i] = DP[1][j] + 1;
	}
	for (int i = 0; i < n; i++)
	{
		res[i] = DP[0][i] + DP[1][i];
		if (result < res[i])
			result = res[i];
	}
	cout << result - 1;
	ft_free(DP, res, arr, n);
	return (0);
}
