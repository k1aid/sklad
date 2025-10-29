#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int income, lateNum, codeRows, penalty, userChoice, rowPrice, temp;

	penalty = 0;

	rowPrice = 0.5;

	cout << "Выберите пункт меню:\n";
	cout << "1 - доход и количество опозданий -> \nкол-во строк кода\n";
	cout << "2 - доход и количество кодовых строк -> \nкол-во опоздания\n";
	cout << "3 - количество опозданий и количество строк кода -> \nкол-во дохода\n";
	cin >> userChoice;

	switch (userChoice)
	{
	case 1:
	{
		cout << "Входной доход, желаемый пользователем\n";
		cin >> income;
		cout << "Сколько раз пользователь опаздывал?\n";
		cin >> lateNum;
		codeRows = income / rowPrice;
		if (lateNum >= 3)
		{
			penalty = lateNum / 3 * 20;
			codeRows = codeRows + penalty / rowPrice;
		}
		cout << "количество строк кода: " << codeRows;
		cout << "\n";
		break;
	}

	case 2:
	{
		cout << "Входной доход, желаемый пользователем\n";
		cin >> income;
		cout << "Введите количество строк кода\n";
		cin >> codeRows;
		temp = codeRows * rowPrice;
		if (income >= temp)
		{
			cout << "Вам нельзя опаздывать!";
		}
		else
		{
			lateNum = (temp - income) / 20 * 3;
			cout << "Вам разрешается опаздывать ";
			cout << lateNum << " Или " << lateNum + 1;
			cout << " Или " << lateNum + 2 << " Время";
		}
		break;
	}

	case 3:
	{
		cout << "Введите количество строк кода\n";
		cin >> codeRows;
		cout << "Сколько раз пользователь опаздывал?\n";
		cin >> lateNum;
		temp = codeRows * rowPrice;
		if (lateNum >= 3)
		{
			penalty = lateNum / 3 * 20;
			if (penalty >= temp)
			{
				cout << "Вы получите ничего\n";
			}
			else
			{
				income = temp - penalty;
				cout << "Вы получите " << income;
				cout << "$\n";
			}
		}

		else
		{
			income = temp;
			cout << "Вы получите " << income << "$\n";
		}
		break;

	}
	default:
		cout << "Неправильный ввод!";

	}






	return 0;
}