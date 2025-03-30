#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream input;
    string filename;

    cout << "Enter the file name: ";
    cin >> filename;

    input.open(filename);

    if (!input) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    int charCount = 0;
    char ch;

    // Read characters one by one
    while (input.get(ch)) {
        charCount++;
    }

    input.close();
    cout << "The file contains " << charCount << " characters." << endl;

    return 0;
}