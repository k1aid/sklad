#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

void fillArrayInt(int* arr, int size, int min, int max)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}

void printArrayInt(const int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "; " << arr[i];
	}
	cout << endl;
}

int findMinInt(const int* arr, int size)
{
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

int findMaxInt(const int* arr, int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

void sortArrayInt(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);		
	}
}

void editElementInt(int* arr, int size)
{
	int index, newValue;
	cout << "Введите индекс элемента для изменения: " << endl;
	cin >> index;

	if (index >= 0 && index < size)
	{
		cout << "Введите новое значение: " << endl;
		cin >> newValue;
		arr[index] = newValue;
	}
	else
		cout << "Неверный индекс!" << endl;
}