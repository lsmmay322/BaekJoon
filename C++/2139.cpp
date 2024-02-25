#include <iostream>
using namespace std;

unsigned long long dp[91][2] = { 0, };

int main()
{
	int n;
	unsigned long long res = 0;
	scanf("%d", &n);

	for (int i = 0; i <= 1; i++)
		dp[1][i] = (i == 0) ? 0 : 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 1; j++)
		{
			if (j == 0)
				dp[i][j] = dp[i - 1][0] + dp[i - 1][1];
			else
				dp[i][j] = dp[i - 1][0];
		}
	}
	for (int i = 0; i <= 1; i++)
		res += dp[n][i];
	cout << res<< endl;
	return 0;
}
