#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
    cin>>array[i];
    }
    
    int pd = array[1] - array[0];
    int ans;
    int curr = 1;
    for (int i = 2; i < n; i++)
    {
        if (pd == array[i] - array[i - 1])
        {

            curr++;
        }
        else
        {
            pd = array[i] - array[i - 1];
        }
    }
    ans = curr;
    cout<<"Largest arthmetic subarray size is "<<ans<<endl;

    return 0;
}