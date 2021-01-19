#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;
typedef unsigned long long ull;

int main()
{
    string a, b, c, d;
    ull x ,y;

    cin >> a >> b >> c >> d;
    x =(ull)stoi(a) * pow(10, strlen(b.c_str())) + (ull)stoi(b);
    y = (ull)stoi(c) * pow(10, strlen(d.c_str())) + (ull)stoi(d);

    cout << x + y << endl;
}