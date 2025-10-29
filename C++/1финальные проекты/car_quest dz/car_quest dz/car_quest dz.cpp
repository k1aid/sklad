#include <iostream>
#include <string>
#include <vector>

using namespace std;

union CarNumber
{
    int number;
    char text;
};

struct Car
{
    string color;
    string model;
    CarNumber number;
    bool isNumber;


    void fillCar()
    {
        int choice;
        cout << "Введите цвет машины:  " << endl;
        cin >> color;
        cout << "Введите модель машины:  " << endl;
        cin >> model;

        cout << "Выберите тип номера (1 - число, 2  - строка.): " << endl;
        cin >> choice;

        if (choice == 1) 
        {
            cout << "Введите 5-значный номер: ";
            cin >> number.number;
            isNumber = true;
        }
        else 
        {
            cout << "Введите номер машины (до 8 символов): ";
            cin >> number.text;
            isNumber = false;
        }
    }
    void printCar() const
    {
        cout << "Цвет: " << color << ", Модель: " << model << ", Номер: ";
        if (isNumber)
        {
            cout << number.number;
        }
        else
        {
            number.text;
        }
        cout << endl;
    }
};

void editCar(Car& car)
{
    cout << "Редактируем данные о машине: " << endl;
    car.fillCar();
}

void printAllCars(const vector<Car> &cars) 
{
    for (const auto& car : cars) 
    {
        car.printCar();
    }
}

int searchCar(const vector<Car>& cars, const CarNumber& searchNumber, bool isNumber)
{
    for (size_t i = 0; i < cars.size(); i++)
    {
        if (isNumber && cars[i].isNumber && cars[i].number.number == searchNumber.number)
        {
            return i;
        }
        else if (!isNumber && cars[i].isNumber && (cars[i].number.text, searchNumber.text) == 0)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    setlocale(LC_ALL, "");

    vector<Car> cars(10);

    for (int i = 0; i < 10; i++)
    {
     cout << "Введите данные для машины " << i + 1 << ": " << endl;
           cars[i].fillCar();
    }

    cout << endl << "Информация о всех машинах: " << endl;
    printAllCars(cars);

    cout << endl << "Редактирование данных о первой машине" << endl;
    editCar(cars[0]);

    cout << endl << "Информация о всех машинах после редактирования информации: " << endl;
    printAllCars(cars);

    CarNumber searchNumber;
    bool isNumberSearch;
    int searchChoice;



    cout << "Выберите тип номера для поиска машины (1 - число, 2  - строка.): " << endl;
    cin >> searchChoice;

    if (searchChoice == 1) 
    {
        cout << "Введите 5-значный номер для поиска: ";
        cin >> searchNumber.number;
        isNumberSearch = true;
    }
    else 
    {
        cout << "Введите номер машины (до 8 символов) для поиска: ";
        cin >> searchNumber.text;
        isNumberSearch = false;
    }
    
    int index = searchCar(cars, searchNumber, isNumberSearch);

    if (index != -1)
    {
        cout << "Машина с указанным номером найдена под индексом: " << index << endl;
        cars[index].printCar();
    }
    else
    {
        cout << "Машина с указанным номером не найдена!" << endl;
    }


    return 0;
}