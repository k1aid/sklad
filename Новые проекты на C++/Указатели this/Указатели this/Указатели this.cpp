#include <iostream>
#include <chrono>

using namespace std;

class Point
{
    int x;
    int y;
public:
    int getX() { return x; }
    int getY() { return y; }

    Point() : x{ 0 }, y{ 0 } {}
    Point(int a) : x{ a }, y{ a } {}
    Point(int pX, int pY) : x{ pX }, y{ pY } {}
};

class Human
{
    char* name;
    int age;
    long id;
public:
    Human(const char* nameP, int ageP, long idP) :
        name{ new char[strlen(nameP) + 1] }, age{ ageP }, id{ idP }
    {
        cout << "Конструктор имени, возраста и паспорта" << endl;
    }
    Human(const char* nameP, int ageP) :
        Human(new char[strlen(nameP) + 1], ageP, 0)
    {
        cout << "Конструктор имени и возраста" << endl;
    }
    Human(const char* nameP) :
        Human(new char[strlen(nameP) + 1], 0, 0)
    {
        cout << "Конструктор имени" << endl;
    }
    Human() : Human("John Doe", 0, 0)
    {
        cout << "Конструктор по умолчанию" << endl;
    }
};

class bunk
{
public:
    int deposit;
    static int budget;
};

class asd
{

public:
    void DateTime(int millisecondsP, int secondsP, int minutesP, int hoursP, int dayP, int weekP, int monthP, int yearP) {
        this->dayP = dayP;
    }
    int getDay()
    {
        return dayP;
    }
    void setDay(int day)
    {
        this->dayP = day;
    }
    int getMs()
    {
        return milliseconds;
    }
    void setMs(int milliseconds)
    {
        this->milliseconds = milliseconds;
    }
    int getseconds()
    {
        return seconds;
    }
    void setseconds(int seconds)
    {
        this->seconds = seconds;
    }
    int getminutes()
    {
        return minutes;
    }
    void setminutes(int minutes)
    {
        this->minutes = minutes;
    }
    int gethours()
    {
        return hours;
    }
    void sethours(int hours)
    {
        this->hours = hours;
    }
    int getweek()
    {
        return week;
    }
    void setweek(int week)
    {
        this->week = week;
    }
    int getmonth()
    {
        return month;
    }
    void setmonth(int month)
    {
        this->month = month;
    }
    int getyear()
    {
        return year;
    }
    void setyear(int year)
    {
        this->year = year;
    }
    void Print()
    {
        cout << day << "." << month << "." << year << endl;
    }
};


int main()
{
    setlocale(LC_ALL, "");

    //Point p1;
    //Point p2{ 5 };
    //Point p3{ 42, 33 };
    //
    //Human h1;
    //Human h2{ "John Doe" };
    //Human h3{ "John Doe", 44 };
    //Human h4{ "John Doe", 44, 12345678 };

    bunk filial_Stav{ 100000 };
    bunk filial_Mikhailovsk{ 50000 };

    cout << "Общий бюджет банка: " << bunk::budget << " Рублей" << endl;
    cout << "Ставропольский филиал: " << filial_Stav.deposit << " Рублей" << endl;
    cout << "Михайловский филиал: " << filial_Mikhailovsk.deposit << " Рублей" << endl;

     bunk::budget = filial_Stav.budget - 1000;
     filial_Mikhailovsk.deposit += 1000000;
    cout << "Михайловск запросил:" << filial_Mikhailovsk.deposit << endl;

    cout << "Общий бюджет банка: " << bunk::budget << " Рублей" << endl;
    cout << "Ставропольский филиал: " << filial_Stav.deposit << " Рублей" << endl;
    cout << "Михайловский филиал: " << filial_Mikhailovsk.deposit << " Рублей" << endl;


    return 0;
}
