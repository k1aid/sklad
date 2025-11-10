#include <iostream>
#include <string.h>

using namespace std;

class fraction
{
private:
    int numerator;
    int denominator;
public:
    void input(int f, int t)
    {
        numerator = f;
        denominator = t;
    }
    void mult(int x)
    {
        numerator *= x;
        cout << "Множитель дроби: " << numerator << '/' << denominator << endl;
    }
    void div(int x)
    {
        denominator *= x;
        cout << "Делитель дроби: " << numerator << '/' << denominator << endl;
    }
    void sum(int x)
    {
        numerator += (x * denominator);
        cout << "Слагаемое дроби:  " << numerator << '/' << denominator << endl;
    }
    void sub(int x)
    {
        numerator -= (x * denominator);
        cout << "Вычитание дроби:  " << numerator << '/' << denominator << endl;

    }
};

int main()
{
    setlocale(LC_ALL, "");
    int a, b;
    cout << "Введите числетель: " << endl;
    cin >> a;
    cout << "Введите знаминатель: " << endl;
    cin >> b;
    fraction asd;
    asd.input(a, b);

    asd.mult(a);
    asd.div(a);
    asd.sum(a);
    asd.sub(a);
    
    return 0;
}