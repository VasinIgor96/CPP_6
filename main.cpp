#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int array[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    int sum = 0;
    int minElement = INT_MAX;
    int maxElement = INT_MIN;
    int totalElements = 0;

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            
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

 
    std::cout << "Сума всіх елементів: " << sum << std::endl;
    std::cout << "Середнє арифметичне: " << average << std::endl;
    std::cout << "Мінімальний елемент: " << minElement << std::endl;
    std::cout << "Максимальний елемент: " << maxElement << std::endl;

    return 0;
}
