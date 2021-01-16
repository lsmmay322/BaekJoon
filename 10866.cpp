#include <deque>
#include <iostream>
using namespace std;

int main()
{
    int n;
    deque<int> arr;
    string str;
    int num;

    scanf("%d", &n);
    for (int i = 0 ; i < n ; i++){
        cin >> str;
        if (str == "push_back")
        {
            scanf("%d", &num);
            arr.push_back(num);
        }
        else if (str == "push_front"){
            scanf("%d", &num);
            arr.push_front(num);
        }
        else if (str == "pop_front"){
            if (arr.empty()){
                cout << "-1" << '\n';
            }
            else
            {
                arr.front();
				arr.pop_front();
            }
        }
        else if (str == "pop_back"){
            if (arr.empty()){
                cout << "-1" << '\n';
            }
            else
            {
                arr.back();
				arr.pop_back();
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
    }
	return (0);
}