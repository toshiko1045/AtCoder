#include <iostream>
#include <vector>
using namespace std;

void enumerateStrings(int length, string current) {
    // Base case: If the current string has the desired length, print it
    if (current.length() == length) {
        cout << current << endl;
        return;
    }

    // Recursive case: Add a, b, or c to the current string and call the function recursively
    enumerateStrings(length, current + 'a');
    enumerateStrings(length, current + 'b');
    enumerateStrings(length, current + 'c');
}

int main() {
    int length;
    cout << "Enter the length of the strings: ";
    cin >> length;

    cout << "Enumerated strings:\n";
    enumerateStrings(length, "");

    return 0;
}
