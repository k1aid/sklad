#include <iostream>
#include"time.h"
#include <vector> 
#include <string> 
#include <iomanip> 


using namespace std;


int main()
{
	setlocale(LC_ALL, "");

	
	
	
	
	
	
	
	
	
	
	//задание 3
	//vector<string> days = { "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье" };
	//vector<double> expenses(7);
	//double total_spent = 0.0;
	//
	//
	//for (int i = 0; i < 7; i++) {
	//	cout << "Введите расходы за " << days[i] << ": ";
	//	while (!(cin >> expenses[i]) || expenses[i] < 0) {
	//		cout << "Ошибка! Введите неотрицательное число: ";
	//		cin.clear();
	//		cin.ignore(10000, '\n');
	//	}
	//	total_spent += expenses[i];
	//}
	//
	//
	//double average_spent = total_spent / 7.0;
	//
	//
	//vector<string> high_spending_days;
	//for (int i = 0; i < 7; i++) {
	//	if (expenses[i] > 100) {
	//		high_spending_days.push_back(days[i]);
	//	}
	//}
	//
	//
	//cout << fixed << setprecision(2);
	//cout << "\nРезультаты:\n";
	//cout << "Общая сумма расходов за неделю: $" << total_spent << endl;
	//cout << "Средние расходы за день: $" << average_spent << endl;
	//
	//if (!high_spending_days.empty()) {
	//	cout << "Дни с расходами более $100: ";
	//	for (size_t i = 0; i < high_spending_days.size(); i++) {
	//		cout << high_spending_days[i];
	//		if (i < high_spending_days.size() - 1) {
	//			cout << ", ";
	//		}
	//	}
	//	cout << endl;
	//}
	//else {
	//	cout << "Нет дней с расходами более $100." << endl;
	//}








	//Задание 2
	// 
	//int const n = 10, a = 10, b = 20;
	//
	//int mass1[n], mass2[n], result[n];
	//
	//srand(time(NULL));
	//
	//cout << "1st + 2nd = result\n";
	//
	//
	//
	//for (int i = 0; i < n; i++)
	//{
	//	mass1[i] = a + rand() % (b — a);
	//	mass2[i] = a + rand() % (b — a);
	//	result[i] = mass1[i] + mass2[i];
	//	cout << mass1[i] << " + " << mass2[i];
	//	cout << " = " << result[i] << "\n";
	//}





	//Задание 1
	//int const n = 10, m = 5, a = 10, b = 20;
	//int mass[n], mass1[m], mass2[m];
	//
	//
	//srand(time(NULL));
	//
	//for (int i = 0; i < n; i++)
	//{
	//	mass[i] = a + rand() % (b — a);
	//	cout << mass[i] << " ";
	//}
	//
	//
	//cout << "1st 2nd\n";
	//
	//
	//for (int i = 0; i < m; i++)
	//{
	//	mass1[i] = mass[i];
	//	mass2[i] = mass[i + 5];
	//}
	//
	//
	//for (int i = 0; i < m; i++)
	//{
	//	cout << mass1[i] << " " << mass2[i] << "\n";
	//}


	return 0;
}