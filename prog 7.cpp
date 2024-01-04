#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Convert the character to lowercase for easy comparison
    ch = tolower(ch);

    // Check if the entered character is an alphabet
    if ((ch >= 'a' && ch <= 'z')) {
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << "'" << ch << "' is a vowel." << endl;
        } else {
            cout << "'" << ch << "' is a consonant." << endl;
        }
    } else {
        cout << "Invalid input. Please enter an alphabet." << endl;
    }

    return 0;
}

