#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, num;
    vector<int> arr;
    cin >> n >> k;
    for (int i = 0; i < n ; i++)
    {
        scanf("%d", &num);
        arr.push_back(num);
    }
    sort(arr.begin() , arr.end());
    cout << arr[k-1];
}