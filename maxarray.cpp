#include <iostream>
#include <string>
using namespace std;

template <typename T> 
T maxInArray(T array[], int size) {
    T max = array[0]; 
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i]; 
        }
    }
    return max;
}

int main() {
    int intArray[] = {1, 5, 3, 9, 2};
    cout << "Max (int): " << maxInArray(intArray, 5) << endl;

    double doubleArray[] = {2.5, 3.7, 0.4, 9.8, 1.2};
    cout << "Max (double): " << maxInArray(doubleArray, 5) << endl;

    string stringArray[] = {"apple", "zebra", "banana", "cherry"};
    cout << "Max (string): " << maxInArray(stringArray, 4) << endl;

    return 0;
}
