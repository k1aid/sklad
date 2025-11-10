#include <iostream>
#include <math.h>

using namespace std;

class Bulding {
public:
	string type;
	int year;

	void get_info(){
		cout << "Type: " << type << ". Year: " << year << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "");
	Bulding school;
	school.type = "Школа";
	school.year = 1922;
	school.get_info();

	Bulding trump;
	trump.type = "Трамп сити";
	trump.year = 2019;
	trump.get_info();
}
