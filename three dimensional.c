/*
NAME:AGNES ABUGA
REG NO:BSE-05-197/2024
*/
#include <iostream>
using namespace std;

int main() {
    int cube[2][2][2] = {
        { {1, 2}, {3, 4} },
        { {5, 6}, {7, 8} }
    }; // 3D Array

    cout << "Three-Dimensional Array Elements:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                cout << "cube[" << i << "][" << j << "][" << k << "] = " << cube[i][j][k] << endl;
            }
        }
    }

    return 0;
}
