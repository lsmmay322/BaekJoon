#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    
    getline(cin, str);
    for (int i = 0 ; i < str.length() ; i++){
        if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
            str[i] += 13;
        else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
            str[i] -= 13;
    }
    cout << str << endl;
    return (0);
}