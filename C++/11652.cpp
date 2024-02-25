#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long l;

int main() {
	int n;
	l num, key;
	map<l, int> arr;
	int max = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &num);
		arr[num]++;
	}

	for (auto x : arr)
	{
		if (max < x.second)
		{
			max = x.second;
			key = x.first;
		}
	}
	cout << key;
	return (0);
}
