#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        int j;

        // Print initial spaces
        for (j = 1; j <= rows - i; ++j) {
            cout << " ";
        }

        // Print increasing numbers
        for (j = i; j <= 2 * i - 1; ++j) {
            cout << j;
        }

        // Print decreasing numbers
        for (j = 2 * i - 2; j >= i; --j) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}

