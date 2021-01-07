#include <iostream>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int *DP = new int[n + 1];

	DP[0] = 1;
	DP[1] = 0;
	DP[2] = 3;
	for (int i = 3; i <= n; i++)
	{
		if (i % 2 == 1)
			DP[i] = 0;
		else
		{
			DP[i] = DP[i - 2] * DP[2];
			for (int j = 4; j <= i; j += 2)
				DP[i] += DP[i - j] * 2;
		}

	}
	cout << DP[n] << endl;
	delete[] DP;
	return (0);
}
