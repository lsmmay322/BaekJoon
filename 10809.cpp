#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[26] = { -1, };
	string str;

	cin >> str;
	fill_n(arr, 26, -1);
	for (int i = 0; i < str.length(); i++) {
		int ind = str[i] - 'a';
		if (arr[ind] == -1)
			arr[ind] = i;
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << ' ';
	}
}
