#include <iostream>
#include <string>

using namespace std;


int main()
{


    setlocale(LC_ALL, "Russian");

    int val;
    cin >> val;
    int n = 0;
    do
    {
        if (n % val == 0)
            cout << n << endl;
        n++;
    } while (n <= 300)


}
