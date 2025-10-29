#include <iostream>


using namespace std;


void swap(int* x, int* y)
{
    int temp = *y;
    *y = *x;
    *x = temp;
}



int main()
{
    setlocale(LC_ALL, "");

    int x = 42;
    int y = 13;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    swap(&x, &y);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    int* px;
    int* py;

    px = &x;
    py = &y;
    

    return 0;
}
