#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str;
    while (getline(cin, str) && !cin.eof()){
        int arr[4] = { 0, };
        for (int i = 0 ; i < str.length() ; i++){
            if (islower(str[i]))
                arr[0]++;
            else if (isupper(str[i]))
                arr[1]++;
            else if (str[i] >= '0' && str[i] <= '9')
                arr[2]++;
            else
                arr[3]++;
        }
        for (int i = 0 ; i<4;i++){
            cout << arr[i] << ' ';
        }
    }
    return (0);
}