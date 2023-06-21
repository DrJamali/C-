#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int list[n];

    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }

    for (int count = 1; count < n; count++)
    {

        for (int i = 0; i < n - count; i++)
        {
            if (list[i] > list[i + 1])
            {
                int temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << list[i] << " ";
    }

    return 0;
}