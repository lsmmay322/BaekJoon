#include <iostream>
#include <vector>
#include <string>
using namespace std;

void	ft_print_binary(int n, int cnt)
{
	vector <int> binary;

	vector <int> ::reverse_iterator riter;
	while (1)
	{
		binary.push_back(n % 2);
		n /= 2;
		if (n == 0) break;
	}
	if (cnt != 0) # 첫재 자리수가 아닌경우 빈자리에 0 추가
	{
		while (binary.size() != 3)
			binary.push_back(0);
	}
	for (riter = binary.rbegin(); riter != binary.rend(); riter++)
		cout << *riter;
}
int		main()
{
	string			str;
	vector <int>	v;
	int				cnt = 0;

	cin >> str;
	for (int i = 0; i < str.length(); i++)
		v.push_back(str[i] - '0');
	for (auto x : v)
	{
		ft_print_binary(x, cnt);
		cnt++;
	}

	return (0);
}
