#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string str;
    stack<char> st;
    int count = 0;
    bool check = false;

    cin >> str;
    for (int i = 0 ; i < str.length() ; i++)
    {
        if (str[i] == '('){
            if (str[i + 1] == ')'){
                st.push(str[i]);
                check = true;
            }
            else
                st.push(str[i]);
        }
        else{
            if (check == true){
                st.pop();
                count += st.size();
                check = false;
            }
            else
            {
                count++;
                st.pop();
            }
        }
    }
    cout << count << '\n';
}