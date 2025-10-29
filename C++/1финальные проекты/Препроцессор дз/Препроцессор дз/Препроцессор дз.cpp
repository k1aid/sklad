#include <iostream>
#include <string.h>

#define zoop print_small = (small_num > 0) ? 1 : 0
#define pooz print_big = (big_num > 0) ? 1 : 0
#define kvadrat print_kvd = kvd * kvd
#define stepen print_stepen = chislo * chislo
#define chetka if ( chetko % 2 == 0) cout << chetko << " это чётное число." 
#define nechetka else cout << chetko << " это нечётное число."

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    
    int print_small;
    int small_num = 0;
    zoop;
    cout << "Наименьшее число " << print_small << " если число больше, то x == 1, в противном случае — x == 0." << endl;
    
    int print_big;
    int big_num = 10;
    pooz;
    cout << "Наибольшее число " << print_big << " если число больше, то x == 1, в противном случае — x == 0." << endl;

    int print_kvd;
    int kvd = 10;
    kvadrat;
    cout << "Квадрат йоу: " << print_kvd << endl;

    int print_stepen;
    int chislo = 10;
    int step = 2;
    stepen;
    cout << "Степень йоу: " << print_stepen << endl;

    int chetko = 12;
    chetka;
    nechetka;

    return 0;
}