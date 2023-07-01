#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;
    
    // cout << "size 1 is: ";
    // cout << size;
    // cout << "\n";

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int idx[1000000];
    
    for (int i = 0; i < 1000000; i++)
    {
        idx[i] = -1;
    }

    // cout << "size 2 is: ";
    // cout << size;

    // return 0;


    for (int i = 0; i < size; i++)
    {
        if(arr[i]>0){
        idx[arr[i]] = 1;
        }
        else{
            continue;
        }
    }

    for (int i = 1; i < 1000000; i++)
    {
        if (idx[i]==-1)
        {
          cout<<i<<endl;
          break;
        }
        
        
    }
    

    return 0;
}