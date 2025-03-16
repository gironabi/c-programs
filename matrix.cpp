#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int rows = 3;
    const int cols = 4;
    
    vector<vector<double>> matrix(rows, vector<double>(cols));
    cout << "Enter a " << rows << " by " << cols << " matrix row by row:" << endl;
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    for (int col = 0; col < cols; ++col) {
        double col_sum = 0;
        for (int row = 0; row < rows; ++row) {
            col_sum += matrix[row][col];
        }
        cout << "Sum of the elements at column " << col << " is " << col_sum << endl;
    }
    
    return 0;
}
