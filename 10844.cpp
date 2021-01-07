#include <iostream>
using namespace std;

long dp[101][10];
#define MOD 1000000000;

int main()
{
	int n;
	int count;

	cin >> n;
	count = 0;
	for (int i = 0; i <= 9; i++)
		dp[1][i] = (i == 0) ? 0 : 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				dp[i][j] = dp[i - 1][1] % MOD;
			}
			else if (j == 9)
			{
				dp[i][j] = dp[i - 1][8] % MOD;
			}
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
		}
	}
	for (int j = 0; j <= 9; j++)
		count = (count + dp[n][j]) % MOD;
	printf("%ld ", count);
}
