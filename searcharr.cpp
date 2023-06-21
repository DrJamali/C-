#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int list[n];
    int sort[n];
    int i;
    int j;
    int search = 8;
    for (i = 0, j = 0; i < n; i++, j++)
    {
        cin >> list[i];
        if (list[i] == 8)
        {
            cout << "YE RAHA AAPKA NUMBER: " << i<< endl;
        }
    }

    return 0;
}