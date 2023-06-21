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
        for (int j = 0; j < n-i; j++)
        {
            if (list[j] > list[j + 1])
            {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }


for (int i = 0; i < n; i++)
{
    cout << list[i] << " ";
}
cout<<endl;
for (int i = 0; i < n - 1; i++)
{
    for (int j = 0; j < n - i; j++)
    {
        if (list[j] < list[j + 1])
        {
            int temp = list[j];
            list[j] = list[j + 1];
            list[j + 1] = temp;
        }
    }
}

for (int i = 0; i < n; i++)
{
    cout << list[i] << " ";
}

return 0;
}