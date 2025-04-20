#include <iostream>
#include <string>
using namespace std;

template <typename T>
int linearSearch(const T list[], T key, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        if (key == list[i])
            return i;
    }
    return -1;
}

int main() {
    int intList[] = {1, 4, 4, 2, 5, -3, 6, 2};
    cout << "Index of 4 in intList: " << linearSearch(intList, 4, 8) << endl;     // Expected: 1
    cout << "Index of -4 in intList: " << linearSearch(intList, -4, 8) << endl;   // Expected: -1
    cout << "Index of -3 in intList: " << linearSearch(intList, -3, 8) << endl;   // Expected: 5

    double doubleList[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "Index of 4.4 in doubleList: " << linearSearch(doubleList, 4.4, 5) << endl; // Expected: 3

    string stringList[] = {"apple", "banana", "cherry", "date"};
    cout << "Index of \"cherry\" in stringList: " << linearSearch(stringList, string("cherry"), 4) << endl; // Expected: 2
    cout << "Index of \"grape\" in stringList: " << linearSearch(stringList, string("grape"), 4) << endl;   // Expected: -1

    return 0;
}
