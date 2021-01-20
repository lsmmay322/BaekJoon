#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    vector<string> v;
    
    cin >> str;
    for (int i = 0 ; i < str.length() ; i++)
    {
        string tmp = "";
        tmp += str.substr(i, str.length() - i);
        v.push_back(tmp);
    }
    stable_sort(v.begin() , v.end());
    for (auto x : v)
        cout << x << '\n';
}