

#include <iostream>




using namespace std;




int main()
{

	setlocale(LC_ALL, "RUS");


	int inputSec, h, m, sec, h1, m1, sec1, temp;




	cout << "Пожалуйста, введите время в секундах:\n";

	cin >> inputSec;



	h = inputSec / 3600;

	temp = inputSec % 3600;

	m = temp / 60;

	sec = temp % 60;


	cout << "Сейчас:\n" << h << " часов\n" << m << "минут\n" << sec << "Cекунд\n";


	temp = 86400 - inputSec;

	h1 = temp / 3600;

	temp = temp % 3600;

	m1 = temp / 60;

	sec1 = temp % 60;



	cout << "Время до полуночи:" << h1 << "";


	cout << m1 << ":" << sec1 << "\n";







	return 0;
}