#include <iostream>
#include <string>

using namespace std;

double average(int arr, int len) {
    double sum = 0;
    for (int i = 0; i < len; i++) 
    {
        sum += arr[i];
    }
    return sum / len;
}

unsigned rekurs(unsigned a, unsigned b)
{
    if (a == 0)
        return b;

    else if (b == 0)
        return a;

    else if (a > b)
        return rekurs(b, a % b);

    else
        return rekurs(a, b % a);
}




int main()
{
    setlocale(LC_ALL, "Russian");


    //int a, b;
    //
    //cin >> a >> b;
    //cout << " рекурсивную функцию нахождения наибольшего общего делителя двух целых чисел =  " << rekurs(a, b) << endl;



    return 0;
}
