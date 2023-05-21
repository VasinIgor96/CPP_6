#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

const int ROWS1 = 5;
const int COLS1 = 10;
const int ROWS2 = 5;
const int COLS2 = 5;

void fillArray(int array[][COLS1], int array2[][COLS2]) {
    srand(time(0));
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS1; j++) {
            array[i][j] = rand() % 51;
        }
    }

    for (int i = 0; i < ROWS2; i++) {
        for (int j = 0; j < COLS2; j++) {
            if (j * 2 + 1 < COLS1) {
                array2[i][j] = array[i][j * 2] + array[i][j * 2 + 1];
            }
        }
    }
}

void printArray(int array[][COLS1], int array2[][COLS2]) {
    cout << "Array 1:" << endl;
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS1; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Array 2:" << endl;
    for (int i = 0; i < ROWS2; i++) {
        for (int j = 0; j < COLS2; j++) {
            cout << array2[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int array1[ROWS1][COLS1];
    int array2[ROWS2][COLS2];

    fillArray(array1, array2);

    printArray(array1, array2);

    return 0;
}
