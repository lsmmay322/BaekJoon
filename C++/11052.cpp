#include <iostream>
#define MAX(a, b) (a > b) ? a : b
using namespace std;

int main()
{
	int n;
	int arr[1001];
	int DP[1001];
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		DP[i] = arr[i];
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			DP[i] = MAX(DP[i], DP[i - j] + arr[j]);
		}
	}
	cout << DP[n] << endl;
	return (0);
}
