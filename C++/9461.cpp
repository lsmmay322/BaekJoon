#include <iostream>

using namespace std;
unsigned long long DP[101];

int main()
{
	int n;
	int j = 3;
	scanf("%d", &n);
	int* arr = new int[n];

	DP[0] = 0;
	DP[1] = 1;
	DP[2] = 1;

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		for (j; j <= arr[i]; j++)
		{
			DP[j] = DP[j - 2] + DP[j - 3];
		}
		cout << DP[arr[i]] << "\n";
	}
	delete[] arr;
	return (0);
}
