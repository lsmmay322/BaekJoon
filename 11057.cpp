#include <iostream>
#define MOD 10007
using namespace std;

long long dp[1001][10];

int main()
{
	int n;
	long long res = 0;
	scanf("%d", &n);

	for (int i = 0; i <= 9; i++)
		dp[1][i] = 1;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int k = 0; k <= j; k++)
			{
				dp[i][j] += dp[i - 1][k] % MOD;
			}
		}
	}
	for (int i = 0; i <= 9; i++)
        res += dp[n][i];

	cout << res % MOD << endl;
	return 0;
}
