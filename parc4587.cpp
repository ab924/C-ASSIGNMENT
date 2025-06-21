#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], C[2][2];

    
    cout << "------------Matrix: 1------------\n";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j) {
            cout << "Enter elements: ";
            cin >> A[i][j];
        }


    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j)
            cout << A[i][j] << " ";
        cout << endl;
    }


    cout << "------------Matrix: 2------------\n";
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j) {
            cout << "Enter elements: ";
            cin >> B[i][j];
        }

    
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j)
            cout << B[i][j] << " ";
        cout << endl;
    }

    
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < 2; ++k)
                C[i][j] += A[i][k] * B[k][j];
        }

    
    cout << "------------Result : Multiplication Matrix------------\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j)
            cout << C[i][j] << "\t";
        cout << endl;
    }
}

