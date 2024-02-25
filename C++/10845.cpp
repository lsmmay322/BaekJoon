#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
    int n;
    queue<int> arr;
    string str;
    int num;

    scanf("%d", &n);
    for (int i = 0 ; i < n ; i++){
        cin >> str;
        if (str == "push"){
            scanf("%d", &num);
            arr.push(num);
        }
        else if (str == "front"){
            if (arr.empty())
                cout << "-1" << '\n';
            else
                cout << arr.front() << '\n';
        }
        else if (str == "back"){
            if (arr.empty())
                cout << "-1" << '\n';
            else
                cout << arr.back() << '\n';
        }
		else if (str == "pop"){
			if (arr.empty())
				cout << "-1" << '\n';
			else
			{
				cout << arr.front() << '\n';
				arr.pop();
			}
		}
		else if (str == "size"){
			cout << arr.size() << '\n';
		}
		else if (str == "empty"){
			if (arr.empty())
				cout << "1" << '\n';
			else
				cout << "0" << '\n';
		}
    }
	return (0);
}