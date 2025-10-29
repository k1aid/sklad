//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "RUS");
//
//    float a, b, lovesosa;
//
//    std::cout << "Привет. Введи расстояние до Аэропорта в километрах\n";
//    cin >> a;
//
//    std::cout << "Введи время до Аэропорта в минутах\n";
//    cin >> b;
//
//    lovesosa = a / b;
//
//    cout << "Твоя примерная скорость должна быть: ";
//    cout << lovesosa << " km/min";
//
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "RUS");
//
//    int h1, m1, s1, h2, m2, s2, price;
//    float t1, t2, t, totalSum;
//    price = 2;
//
//    cout << "Пожалуйста, укажите время начала поездки:\n";
//    cout << "1.Введите часы:\n";
//    cin >> h1;
//
//    cout << "2.Введите минуты:\n";
//    cin >> m1;
//
//    cout << "3.Введите секунды:\n";
//    cin >> s1;
//
//    cout << "Пожалуйста, укажите время начала поездки:\n";
//    cout << "1.Введите часы:\n";
//    cin >> h2;
//
//    cout << "2.Введите минуты:\n";
//    cin >> m2;
//
//    cout << "3.Введите секунды:\n";
//    cin >> s2;
//
//
//
//    t1 = h1 * 60 + m1 + s1 / 60;
//
//    t2 = h2 * 60 + m2 + s2 / 60;
//
//    t = t2 - t1;
//
//    totalSum = price * t;
//
//    cout << "The trip cost: " << totalSum << " grn.";
//
//    return 0;
//}




#include <iostream>


using namespace std;



int main()
{
	setlocale(LC_ALL, "RUS");


	float s, price1, price2, price3, fc, totalSum1, totalSum2, totalSum3;

	cout << "Пожалуйста, укажите расстояние "
		"(В Километрах):\n";
	cin >> s;

	cout << "Пожалуйста, введите цену на бензин-super:\n";

	cin >> price1;

	cout << "Пожалуйста, введите цену на бензин-Super Plus:\n";

	cin >> price2;

	cout << "Пожалуйста, введите цену на бензин-Diesel:\n";

	cin >> price3;

	cout << "Пожалуйста, введите расход топлива:\n";

	cin >> fc;


	totalSum1 = s * price1 * fc / 100;


	totalSum2 = s * price2 * fc / 100;


	totalSum3 = s * price3 * fc / 100;

	cout << "|марка бензина|стоимость поездки|\n";

	cout << "Super\t\t" << totalSum1 << "\n";

	cout << "Super Plus\t" << totalSum2 << "\n";

	cout << "Diesel\t\t" << totalSum3 << "\n";

	return 0;

}