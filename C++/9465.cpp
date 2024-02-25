#include <iostream>
using namespace std;
#define MAX(a, b) (a > b) ? a : b

int dp[2][100001];

int main()
{
	int t, n;
	int res = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		for (int j = 0; j <= 1; j++)
		{
			for (int k = 0; k < n; k++)
				scanf("%d", &dp[j][k]);
		}
		dp[0][1] += dp[1][0];
		dp[1][1] += dp[0][0];
		for (int j = 2; j < n; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				if (k == 0)
					dp[k][j] += MAX(dp[k + 1][j - 1], dp[k + 1][j - 2]);
				if (k == 1)
					dp[k][j] += MAX(dp[k - 1][j - 1], dp[k - 1][j - 2]);
			}
		}
		res = MAX(dp[0][n - 1], dp[1][n - 1]);
		cout << res << endl;
	}
	return 0;
}
