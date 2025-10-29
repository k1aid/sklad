#include <iostream>
#include <string.h>
#include <iomanip>  
#include "function.h"

using namespace std;

#define chisloepta 10
#define vivodarray 100

int main()
{
    setlocale(LC_ALL, "");
    
    const int Size = chisloepta;
    int array[Size];

    fillArray(array, Size, 1, vivodarray);
    cout << "Исходный массив: " << endl;
    printArray(array, Size);

    cout << "Максимальный элемент: " << findMax(array, Size) << endl;
    cout << "Минимальный элемент: " << findMin(array, Size) << endl;

    sortArray(array, Size);
    cout << "Отсортированный массив: " << endl;
    printArray(array, Size);

    editElement(array, Size);
    cout << "Массив после редактирования: " << endl;
    printArray(array, Size);

    return 0;
}
