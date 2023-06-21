#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter your array size";

    cin >> n;
    int list[n];
    int max = INT32_MIN;
    int min = INT32_MAX;
    for (int i = 0; i < n; i++)
    {

        cin >> list[i];
        max = (list[i] > max) ? list[i] : max;
        min =(list[i]< min)? list[i]:min;
    }

    cout << max << endl;
    cout << min << endl;

    return 0;
}
