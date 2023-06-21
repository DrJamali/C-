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
    for (int i = 0; i < n - 1; i++)
    {
        int small = i;
        for (int j = i + 1; j < n; j++)
        {
            if (list[small] > list[j])
            {
                small = j;
            }
        }
        int temp = list[i];
        list[i] = list[small];
        list[small] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        int large = i;
        for (int j = i + 1; j < n; j++)
        {

            if (list[large] < list[j])
            {
                large = j;
            }
        }
        int temp = list[i];
        list[i]=list[large];
        list[large]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << list[i] << " ";
    }

    return 0;
}