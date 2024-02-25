#include <iostream>
using namespace std;

int arr[12];

int main()
{
	int n;
	int pt;

	cin >> n;
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i <= 11; i++)
		arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
	for (int i = 0; i < n; i++)
	{
		cin >> pt;
		cout << arr[pt] << "\n";
	}
}
