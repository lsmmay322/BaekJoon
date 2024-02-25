#include <iostream>
#include <vector>
#define MIN(a, b) (a < b) ? a : b
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	vector<int> dp(n + 1, 0);

	for (int i = 1; i <= n; i++)
	{
		dp[i] = i;
		for (int j = 1; j * j <= i; j++)
		{
			dp[i] = MIN(dp[i], dp[i - (j * j)] + 1);
		}
	}
	cout << dp[n] << endl;
	return (0);
}
