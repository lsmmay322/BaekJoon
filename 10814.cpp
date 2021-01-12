#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool ft_compare(pair<pair<int, string>, int> a, pair<pair<int, string>, int> b)
{
	if (a.first.first == b.first.first)
		return a.second < b.second;
	return a.first.first < b.first.first;
}

int main() {
	int n;
	int age;
	string name;
	vector <pair<pair<int, string>, int>> v;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &age);
		cin >> name;
		v.push_back(make_pair(make_pair(age, name), i));
	}
	sort(v.begin(), v.end(), ft_compare);

	for (auto x : v)
		cout << x.first.first << ' ' << x.first.second <<  '\n';
	return (0);
}
