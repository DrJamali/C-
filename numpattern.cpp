#include <iostream>
using namespace std;
int main()
{
    int row;
   int num =1;
    cin >> row ;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
          cout<<num;
           num++;
        }
        cout << endl;
       
    }
    return 0;
}