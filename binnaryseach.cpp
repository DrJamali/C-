#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sea;
    cin >> sea;
    int list[n];

    int start = 0;
    int end = n;
    int mid;
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
        
    }
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (list[mid] == sea)
        {
            cout << mid;
            flag=1;
            break;
        }
        else if (list[mid]>sea)
        {
            end--;
        }
        else if (list[mid]<sea)
        {
        start++;
        }
        
    }
if (flag == 0)
{
    cout<<"baji isme to nhi? "<<endl;
}

    return 0;
}