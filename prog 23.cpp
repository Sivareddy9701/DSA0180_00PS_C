#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        int j;
        // Print spaces
        for (j = 1; j <= rows - i; ++j) {
            cout << " ";
        }

        // Print left half
        for (j = 1; j <= i; ++j) {
            cout << j;
        }

        // Print right half
        for (j = i - 1; j >= 1; --j) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}

