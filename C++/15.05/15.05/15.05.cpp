#include <iostream>

#include"time.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	//ЗАДАНИЕ 1
	//int const n = 10, a = 10, b = 20;
	//
	//int mass[n];
	//
	//int min, max;
	//
	//srand(time(NULL));
	//
	//
	//for (int i = 0; i < n; i++)
	//{
	//	mass[i] = a + rand() % (b - a);
	//	cout << mass[i] << " ";
	//}
	//
	//
	//min = mass[0];
	//
	//max = mass[0];
	//
	//for (int i = 1; i < n; i++)
	//{
	//	if (mass[i] > max)
	//	{
	//		max = mass[i];
	//	}
	//	if (mass[i] < min)
	//	{
	//		min = mass[i];
	//	}
	//}
	//
	//cout << "min:" << min << ", max:" << max;










	//ЗАДАНИЕ 2
	//const int saze = 6;
	//int mass[saze];
	//int per, summa;
	//for (int i = 0; i < saze; i++)
	//{
	//	cout << "Введите значение массива: " << endl;
	//	cin >> mass[i];
	//	cout << endl;
	//}
	//
	//cout << "Введите число: " << endl;
	//cin >> per;
	//for (int a = 0; a < saze; a++)
	//{
	//	if (mass[a] < per)
	//		summa += mass[a];
	//}
	//cout << "Вывод: " << summa;
	


	
	//ЗАДАНИЕ 3
	//int money;
	//int max = 0, min = 0;
	//int month[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//
	//
	//for (int i=0;i<12;i++)
	//{
	//cout << "Введите прибыль фирмы за " << month[i] <<" месяц: " << endl;
	//cin >> month[i];
	//money += month[i];
	//}
	//
	//for (int y = 0; y < 12; y++)
	//{
	//	if (month[y] > max)
	//		max = month[y];
	//	if (month[y] < min)
	//		min = month[y];
	//}
	//cout << endl << "Прибыль за год: " << money;
	//cout << endl << "Максимальная прибыль за месяц: " << max;
	//cout << endl << "Минимальная прибыль за месяц: " << min;









	//ЗАДАНИЕ 4
	//const int N = 10;
	//
	//float array[N];
	//
	//int firstNeg = 0;
	//
	//int lastNeg = 0;
	//
	//float result = 0;
	//
	//bool flagFirstFound = false;
	//
	//
	//for (int i = 0; i < N; i++)
	//	std::cin >> array[i];
	//
	//
	//for (int i = 0; i < N; i++) {
	//	if (array[i] < 0) {
	//		if (!flagFirstFound) {
	//			firstNeg = i;
	//			flagFirstFound = true;
	//		}
	//		lastNeg = i;
	//	}
	//}
	//
    //
	//for (int i = firstNeg + 1; i < lastNeg; i++) {
	//	result += array[i];
	//}
	//'
	//
	//
	//std::cout << std::endl << result;





	return 0;

}