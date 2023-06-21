#include <iostream>
using namespace std;
int main()
{
     int max = INT32_MIN;
    int array[] = {0,-9,3,-4,5};
    for (int i = 0; i < 5; i++)
    {
       
        max = (max > array[i]) ? max : array[i];
        cout << "The value of " << i << " " << max << endl;
        ;
    }

    return 0;
}