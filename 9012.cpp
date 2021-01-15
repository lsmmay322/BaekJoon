#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int n;
    string str;
    
	scanf("%d", &n);
	for (int i = 0 ; i < n ; i++){
		cin >> str;
		stack<char> arr;
		for (int j = 0 ; j < str.length() ; j++){
			if (str[j] == '(')
				arr.push(str[j]);
			else
			{
				if (!arr.empty()){
					if (arr.top() == '(')
						arr.pop();
				}
				else
				{
					arr.push(str[j]);
					break;
				}	
			}
		}
		if (arr.size() == 0)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
    }
}
