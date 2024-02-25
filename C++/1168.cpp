#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	int max;

	cin >> n >> k;
	vector <int> v;
	int curr = -1;

	for (int i = 1; i <= n; i++)
		v.push_back(i);
	cout << '<';
	max = n;
	for (int i = 0; i < n; i++)
	{
		curr = (curr + k) % max;
		cout << v[curr];
		v.erase(v.begin() + curr);
		max--;
		curr--;

		if (i == n - 1)
			cout << '>';
		else
			cout << ',' << ' ';
	}
}
