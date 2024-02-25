#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool ft_compare(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first)
		return (a.second < b.second);
	return (a.first < b.first);
}
int main()
{
	int	n, x, y;
	vector<pair<int, int>> v;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		scanf("%d", &y);
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end(), ft_compare);

	for (auto x : v) {
		cout << x.first << ' ' << x.second << '\n';
	}
}
