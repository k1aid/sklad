#include <iostream>
#include <vector>  
#include <algorithm>  
#include <string>

using namespace std;



int main()
{
	setlocale(LC_ALL, "");

	vector <string> surnames_student;
  
	cout << "Введите 5 фамилий студентов:\n";
	for (int i = 0; i < 5; ++i) {
			string surname;
		cout << "Фамилия " << i ++ << ": " << endl;
		getline(cin, surname);
		surnames_student.push_back(surname);
	}

	// Сортируем фамилии по возрастанию  
	sort(surnames_student.begin(), surnames_student.end());

	// Выводим отсортированный список  
	cout << "\nОтсортированный список фамилий:\n";
	for (const auto& surname : surnames_student) {
		cout << surname << endl;
	}

	return 0;
}


