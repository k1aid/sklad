#pragma once
#include <iostream>

using namespace std;

#ifndef INTEGER

void fillArrayInt(int* arr, int size, int min, int max);
void printArrayInt(const int* arr, int size);
int findMinInt(const int* arr, int size);
int findMaxInt(const int* arr, int size);
void sortArrayInt(int* arr, int size);
void editElementInt(int* arr, int size);

#define fillArray fillArrayInt
#define printArray printArrayInt
#define findMin findMinInt
#define findMax findMaxInt
#define sortArray sortArrayInt
#define editElement editElementInt

#endif