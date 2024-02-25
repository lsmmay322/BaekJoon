#include <iostream>
#define MAX(a, b) (a > b) ? a : b
using namespace std;

int main()
{
	int n;
	int res;
	scanf("%d", &n);
	int* arr = new int[n];
	int* DP = new int[n];

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	DP[0] = arr[0];
	for (int i = 0; i < n; i++)
		DP[i] = MAX(DP[i - 1] + arr[i], arr[i]);
	res = DP[0];
	for (int i = 0; i < n; i++)
	{
		if (res <= DP[i])
			res = DP[i];
	}
	cout << res;
	delete[] arr;
	delete[] DP;
	return (0);

}
