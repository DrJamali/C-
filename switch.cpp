#include <iostream>
using namespace std;
int main()
{
    char fun;
    cout << "Enter your fun: ";
    cin >> fun;
    switch (fun)
    {
    case 'a':
        cout << "You selected a" << endl;
        break;
    case 'b':
        cout << "You selected b" << endl;
        break;
    case 'c':
        cout << "Your selected c" << endl;
        break;
    default:
        cout << "App chutti karain" << endl;
        break;
    }

    return 0;
}