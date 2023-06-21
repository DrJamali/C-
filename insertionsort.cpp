#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 1; i < n; i++)
    {
        int number = array[i];
        int j;
        for (j = i - 1; ((j >= 0) && (number < array[j])); j--)
        {
            array[j + 1] = array[j];
        }
        array[j + 1] = number;
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}