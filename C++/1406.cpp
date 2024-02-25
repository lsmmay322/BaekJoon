#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
    string str;
    int n;

    cin >> str;
	cin >> n;
	list<char> arr(str.begin(), str.end());
    auto cursor = arr.end(); // 반복자의 데이터 타입은 int가 아니다.
    for (int i = 0 ; i < n ; i++)
    {
    	char command;

		cin >> command;
		if (command == 'L')
		{
			if (cursor != arr.begin())
				cursor--;
		}
		else if (command == 'D')
		{
			if (cursor != arr.end())
				cursor++;
		}
		else if (command == 'B')
		{
			if (cursor != arr.begin())
				cursor = arr.erase(--cursor);
		}
		else if (command == 'P')
		{
			char ch;
			cin >> ch;
			arr.insert(cursor, ch);
		}
    }
	for (auto& x : arr)
		cout << x;
	return (0);
}