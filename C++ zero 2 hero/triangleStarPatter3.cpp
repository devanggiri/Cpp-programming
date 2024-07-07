#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input the number of rows
    
    int row = 1;  // Start with the first row

    while (row <= n) {  // Loop through each row
        int col = 1;  // Start with the first column
        int value = row;  // Initialize the value to start with the current row number
        
        while (col <= row) {  // Print values for each column in the current row
            cout << value;
            value = value + 1;  // Increment the value
            col = col + 1;  // Move to the next column
        }
        cout << endl;  // Move to the next line after completing the row
        row = row + 1;  // Move to the next row
    }

    return 0;
}
