#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;

    cout << "Enter a floating-point number: ";
    cin >> num;

    int floorNum = floor(num);
    int ceilNum = ceil(num);

    if (num - floorNum < 0.5) {
        cout << "The rounded number is: " << floorNum << endl;
    } else {
        cout << "The rounded number is: " << ceilNum << endl;
    }

    return 0;
}
