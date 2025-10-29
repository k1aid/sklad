#include <iostream>

using namespace std;

//Функция распределения динамической памяти

int* allocateMemory(int size) {
    int* arr = new int[size];
    return arr;
}


//Функция инициализации динамического массива. 
void initArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 0;
    }
}



//Функция печати динамического массива. 
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


//Функция добавления элемента в конец массива. 
void conn(int*& arr, int& size, int x) {
    int* newArr = new int[size + 1];
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }
    newArr[size] = x;
    delete[] arr;
    arr = newArr;
    size++;
}


//Функция вставки элемента по указанному индексу.
void insert(int*& arr, int& size, int a, int x) {
    int* newArr = new int[size + 1];
    for (int i = 0; i < a; i++) {
        newArr[i] = arr[i];
    }
    newArr[a] = x;
    for (int i = a + 1; i < size + 1; i++) {
        newArr[i] = arr[i - 1];
    }
    delete[] arr;
    arr = newArr;
    size++;
}



int main()
{
    setlocale(LC_ALL, " ");
    int* gorr;

    //Функция удаления динамического массива.
    delete[] gorr;

    return 0;
}