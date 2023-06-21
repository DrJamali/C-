#include<iostream>
using namespace std;
int main (){
int a;
int b;
int i;
int j;
cin>>a;
cin>>b;
for ( i = a; i < b; i++)
{
    for (j = 2; j < i; j++)
    {
        if (i % j ==0)
        {
            break;
        }
        
    }
    if (j==i)
    {
        cout<<j<<endl;
    }
    
}


return 0;}