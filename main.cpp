#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

        const int ROWS = 3;
        const int COLS = 4;

        int array[ROWS][COLS];

        srand(time(0));

        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++) 
            {
                array[i][j] = rand() % 10 + 1;
            }
        }

        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                cout << array[i][j] << " ";
            }
            cout << endl;
        }
        cout << "--------" << endl;

        int rowSums[ROWS] = { 0 };
        int columnSums[COLS] = { 0 }; 
        int totalSum = 0; 

        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                rowSums[i] += array[i][j];
                columnSums[j] += array[i][j];
                totalSum += array[i][j];
            }
        }

        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                cout << array[i][j] << " ";
            }
            cout << "| " << rowSums[i] << endl;
        }

        for (int j = 0; j < COLS; j++) {
            cout << "--";
        }
        cout << endl;
        for (int j = 0; j < COLS; j++) {
            int columnSum = columnSums[j];
            cout << columnSum << " ";
        }
        cout << "| " << totalSum << endl;

        return 0;
    }

