/*
    Transposing a matrix in-place (without using extra space) is only possible for square matrices 
*/

#include <iostream>
using namespace std;

#define N 3  // You can change this to any size

void transpose(int matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            // Swap elements across the diagonal
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    transpose(matrix);

    cout << "\nTransposed Matrix:\n";
    printMatrix(matrix);

    return 0;
}
