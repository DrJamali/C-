#include <iostream>
using namespace std;

int main() {
    int row;
    cin >> row;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= (row * 2 - 1); j++) {
            if ((j % (row * 2 - 2) == i % (row * 2 - 2)) || (j % (row * 2 - 2) == (row * 2 - 2 - i) % (row * 2 - 2))) {
                cout << "&";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
