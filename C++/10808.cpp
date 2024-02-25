#include <iostream>
#include <string>
using namespace std;

int main()
{
	int arr[26] = { 0, };
	string str;

	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		int ind = str[i] - 'a';
		arr[ind]++;
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << ' ';
	}
}
