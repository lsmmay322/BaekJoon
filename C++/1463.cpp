#include <iostream>
using namespace std;
#define MIN(a,b) (a > b ? b : a)
int dp[10000001];

int main()
{
	int i, n;
	scanf("%d", &n);
	dp[1] = 0;
	dp[2] = 1;
	for (int i = 3; i <= n; i++)
	{
		if (i % 6 == 0)
			dp[i] = MIN(MIN(dp[i / 2], dp[i / 3]), dp[i - 1]) + 1;
		else if (i % 3 == 0)
			dp[i] = MIN(dp[i / 3], dp[i - 1]) + 1;
		else if (i % 2 == 0)
			dp[i] = MIN(dp[i / 2], dp[i - 1]) + 1;
		else
			dp[i] = dp[i - 1] + 1;
	}
	cout << dp[n] << endl;
	return (0);
}
