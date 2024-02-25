#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

struct grade {
	string name;
	int kor, eng, math;
};

bool ft_compare(grade a, grade b)
{
	if (a.kor == b.kor) {
		if (a.eng == b.eng) {
			if (a.math == b.math)
				return a.name < b.name;
			return a.math > b.math;
		}
		return a.eng < b.eng;
	}
	return a.kor > b.kor;
}

int main()
{
	int n;
	scanf("%d", &n);
	vector <grade> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i].name;
		scanf("%d", &v[i].kor);
		scanf("%d", &v[i].eng);
		scanf("%d", &v[i].math);
	}
	sort(v.begin(), v.end(), ft_compare);

	for (auto x : v)
		cout << x.name << '\n';
	return (0);
}
