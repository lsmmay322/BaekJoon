#include <iostream>
#include <string>
#define MOD 1000000
using namespace std;

int main() {
	string str;
	long long DP[5001] = { 0, };
	int tmp;
	int j;

	cin >> str;
	DP[0] = 1;
	for (int i = 0; i < str.length(); i++)
	{
		j = i + 1;
		if (str[0] == '0')
		{
			cout << 0;
			return (0);
		}
		if (str[i] >= '1' && str[i] <= '9')
			DP[j] += DP[j - 1];
		if (i != 0)
		{
			tmp = (str[i - 1] - '0') * 10 + (str[i] - '0');
			if (tmp >= 10 && tmp <= 26)
				DP[j] += DP[j - 2];
		}
		DP[j] %= MOD;
	}
	cout << DP[str.length()] % MOD;
}
