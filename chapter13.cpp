#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ifstream input("number.txt"); // Open the file for reading

    if (!input) {
        cout << "File does not exist" << endl;
        return 1;
    }

    vector<int> numbers;
    int num;

    // Read numbers from file
    while (input >> num) {
        numbers.push_back(num);
    }

    input.close(); // Close the file after reading

    // Sort the numbers
    sort(numbers.begin(), numbers.end());

    // Write sorted numbers back to the file
    ofstream output("numbers.txt"); // Open the file for writing (overwrites)

    if (!output) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    for (int n : numbers) {
        output << n << " ";
    }

    output.close(); // Close the file after writing

    cout << "Numbers sorted and written back to 'numbers.txt'." << endl;

    return 0;
}
