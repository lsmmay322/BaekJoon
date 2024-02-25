#include <iostream>
#include <string>
using namespace std;

void	ft_change(string str, int base)
{
	int res = 0;
	int tmp;
	for (int i = str.length() - 1; i >= 0; i--)
	{
		tmp = 1;
		for (int j = 0; j < str.length() - (i + 1); j++)
			tmp *= base;
		if (str[i] >= 'A' && str[i] <= 'Z')
			tmp *= (str[i] - 'A' + 10);
		else
			tmp *= (str[i] - '0');
		res += tmp;
	}
	printf("%d", res);
}

int main()
{
	string str;
	int base;

	cin >> str >> base;
	ft_change(str, base);
}
