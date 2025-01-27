#include <iostream>
using namespace std;

int main() {
    int arr1[2][2]; // Declare a 2x2 array
    int even_row1 = 0, odd_row1 = 0; // Counters for row 1
    int even_row2 = 0, odd_row2 = 0; // Counters for row 2

    cout << "Enter a number for each element of the 2x2 matrix:" << endl;

    // Input elements for the 2x2 matrix
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr1[i][j];
        }
    }

    // Count even and odd numbers in each row
    for (int j = 0; j < 2; j++) {
        if (arr1[0][j] % 2 == 0) {
            even_row1++;
        } else {
            odd_row1++;
        }
    }

    for (int j = 0; j < 2; j++) {
        if (arr1[1][j] % 2 == 0) {
            even_row2++;
        } else {
            odd_row2++;
        }
    }

    // Output the results
    cout << "Row 1: " << even_row1 << " even numbers and " << odd_row1 << " odd numbers." << endl;
    cout << "Row 2: " << even_row2 << " even numbers and " << odd_row2 << " odd numbers." << endl;

    return 0;
}