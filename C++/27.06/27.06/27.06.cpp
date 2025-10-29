#include <iostream>
#include <string>

using namespace std;


void ukazi(int x, int b)
{

}


int main()
{
    setlocale(LC_ALL, " ");

    const int num{ 10 };
    int num1[num]{1,4,1,7,9,8,8,8,5};
    int num2[num]{};

    int* a{ num1 };
    int* b{ num2 };

    int* block{ num1 + num };

    cout << *a << endl << *b << endl << endl;

    for (;num1 != block; a++, b++)
    {
        *a = *b;
        cout << *b << endl;
    }

    return 0;
}
