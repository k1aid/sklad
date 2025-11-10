#include <iostream>
#include <string.h>

using namespace std;

class fraction
{
private:
    float numerator;
    float denominator;
    int saf(int x, int y)
    {
        if (y == 0) return x;
        return saf(y, x % y);
    }
public:
    void input(float f, float t)
    {
        numerator = f;
        denominator = t;
    }
    void mult(float x)
    {
        numerator *= x;
        cout << "Множитель дроби: " << numerator << '/' << denominator << endl;
    }
    void div(float x)
    {
        denominator *= x;
        cout << "Делитель дроби: " << numerator << '/' << denominator << endl;
    }
    void sum(float x)
    {
        numerator += (x * denominator);
        cout << "Слагаемое дроби:  " << numerator << '/' << denominator << endl;
    }
    void sub(float x)
    {
        numerator -= (x * denominator);
        cout << "Вычитание дроби:  " << numerator << '/' << denominator << endl;
    }
    void show()
    {
        cout << "Текущяя дробь:  " << numerator << '/' << denominator << endl;
    }
    int peredacha()
    {
        return saf(numerator, denominator);
    }
    void reduct(float x)
    {
        numerator /= x;
        denominator /= x;
    }
};

int main()
{
    setlocale(LC_ALL, "");

    int a, b, c;
    fraction asd;

    cout << "Введите числетель: " << endl;
    cin >> a;
    cout << "Введите знаминатель: " << endl;
    cin >> b;

    asd.input(a, b);

    do {
        asd.reduct(asd.peredacha());
        asd.show();

        cout << "1:Прибавить дробь на число" << endl;
        cout << "2:Отнять дробь на число" << endl;
        cout << "3:Умножить дробь на число" << endl;
        cout << "4:Разделить дробь на число" << endl;
        cout << "Выберите действие: " << endl;
        cin >> c;

        switch (c)
        {
        case 1:
            cout << "Введите слагаемое: " << endl;
            cin >> a;
            asd.sum(a);
            break;
        case 2:
            cout << "Введите вычитаемое: " << endl;
            cin >> a;
            asd.sub(a);
            break;
        case 3:
            cout << "Введите множитель: " << endl;
            cin >> a;
            asd.mult(a);
            break;
        case 4:
            cout << "Введите делитель: " << endl;
            cin >> a;
            asd.div(a);
            break;
        default:
            cout << "Ошибка ввода!!" << endl;
        }
        cout << "Продолжить? (+/-)" << endl;
        cin >> c;

    } while (c != '-');

    return 0;
}