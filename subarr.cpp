#include <iostream>
using namespace std;
int main()
{
    int size;
    int sum;
    int S;
    int Start;
    int End;
    int flag=0;
    cout<<"Enter S";
    cin>>S;
    cout<<"Enter the size: ";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        Start = i;
        sum = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (sum == S)
            {
                End = j - 1;
                flag =1;

                break;
            }
            else
            {
                sum = sum + arr[j];
            }
        }
        if (flag==1)
{break;
}
        
    }
if (flag==1)
{
    cout<<"Starting index is "<<Start<<endl;
    cout<<"Ending index is "<<End<<endl;
}
else{
    cout<<"No sub array can be found"<<endl;
}

    return 0;
}