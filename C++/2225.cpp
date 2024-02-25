#include <iostream>
#define MOD 1000000000
using namespace std;

int main() {
	int n, k;
	scanf("%d", &n);
	scanf("%d", &k);
	long long DP[201][201] = { 0, };
	DP[0][0] = 1;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			for (int k = 0; k <= i; k++)
			{
				DP[i][j] += DP[i - k][j - 1];
				DP[i][j] %= MOD;
			}
		}
	}
	cout << DP[n][k] % MOD << endl;
	return (0);
}
