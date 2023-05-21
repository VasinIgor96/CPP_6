#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int array[3][3];

    srand(time(NULL));

   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = rand() % 10 + 1; 
        }
    }

    int sum = 0;
    int minElement = INT_MAX;
    int maxElement = INT_MIN;
    int totalElements = 0;

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {

            sum += array[i][j];

            if (array[i][j] < minElement) {
                minElement = array[i][j];
            }

            if (array[i][j] > maxElement) {
                maxElement = array[i][j];
            }

            totalElements++;
        }
    }

    double average = static_cast<double>(sum) / totalElements;

    cout << "Сума всіх елементів: " << sum << endl;
    cout << "Середнє арифметичне: " << average << endl;
    cout << "Мінімальний елемент: " << minElement << endl;
    cout << "Максимальний елемент: " << maxElement << endl;

    return 0;
}
