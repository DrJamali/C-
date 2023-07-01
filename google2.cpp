#include<iostream>
using namespace std;
int main (){
int n;
cin>>n;
int array[n];
int count=0;
for (int i = 0; i < n; i++)
{
    cin>>array[i];
}
int max = INT32_MIN;
for (int i = 0; i < n; i++)
{
    if (array[i]>max && array[i] > array[i+1])
    {
        count++;
        max=array[i];
    }
    else if (array[i]>max)
    {
        array[i]=max;
    }
    
}
cout<<count<<endl;





    return 0;
}