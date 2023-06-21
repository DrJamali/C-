#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int chech;
    for (int i = 2; i < n; i++)
    {
         int chech=0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                cout <<"Ye daikho non prime number: "<<i<<endl;
                chech = 1;
                break;
            }

        }
        if (chech==0)
        {
            cout<<"Ye daikho shair prime: "<<i<<endl;
        }
    }
  
    
    

    return 0;
}