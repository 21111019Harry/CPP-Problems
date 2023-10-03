#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void wait(int milliseconds) {
    this_thread::sleep_for(chrono::milliseconds(milliseconds));
}

int main() {
    int n;

    cout << "Enter the size of the matrix: ";
    cin >> n;

    int matrix[n][n];

    int num = 1;
    int cycles = (n + 1) / 2;

    for (int cycle = 0; cycle < cycles; cycle++) {
        for (int i = cycle; i < n - cycle; i++) {
            matrix[cycle][i] = num++;
            wait(100);  // Delay for 100 milliseconds
        }

        for (int i = cycle + 1; i < n - cycle; i++) {
            matrix[i][n - cycle - 1] = num++;
            wait(100);  // Delay for 100 milliseconds
        }

        for (int i = n - cycle - 2; i >= cycle; i--) {
            matrix[n - cycle - 1][i] = num++;
            wait(100);  // Delay for 100 milliseconds
        }

        for (int i = n - cycle - 2; i > cycle; i--) {
            matrix[i][cycle] = num++;
            wait(100);  // Delay for 100 milliseconds
        }
    }

    // Print the circular spiral matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            wait(100);
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

