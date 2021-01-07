#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string			str;
	vector <int>	v;
	vector <int>	res;
	int				tmp = 0;
	int				count = 0;

	cin >> str;
	v.push_back(0);
	v.push_back(0);
	for (int i = 0; i < str.length(); i++)
		v.push_back(str[i] - '0');
	vector <int> ::reverse_iterator riter, res_iter;
	for (riter = v.rbegin(); riter != v.rend(); riter++)
	{
		for (int j = 0; j < count; j++)
			*riter *= 2;
		tmp += *riter;
		count++;
		if (count % 3 == 0 )
		{
			res.push_back(tmp);
			count = 0;
			tmp = 0;
		}
	}
	for (res_iter = res.rbegin(); res_iter != res.rend(); res_iter++)
		cout << *res_iter;
	return (0);
}
