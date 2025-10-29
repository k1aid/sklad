#include <iostream>
#include <string>

using namespace std;

//Задание 1.1
//bool Yeart(int year)
//{
//    bool res = false;
//
//    if (year % 4 == 0)
//        res = true;
//
//    if (year % 100 == 0)
//        res = false;
//
//    if (year % 400 == 0)
//        res = true;
//
//    return res;
//}
//int date(int d, int m, int y)
//{
//    int k = d;
//    switch (m - 1)
//    {
//    case 12: k += 31;
//    case 11: k += 30;
//    case 10: k += 31;
//    case  9: k += 30;
//    case  8: k += 31;
//    case  7: k += 31;
//    case  6: k += 30;
//    case  5: k += 31;
//    case  4: k += 30;
//    case  3: k += 31;
//    case  2: if (Yeart(y)) k += 29; else k += 28;
//    case  1: k += 31;
//    }
//    k += (y - 1) * 365 + ((y - 1) / 4);
//    return k;
//}
//int pampam(int x, int y, int Y1, int X1, int i, int i1)
//{
//    int k = date(x, Y1, i) - date(y, X1, i1);
//    return k;
//}

//Задание 1.2
//double dablarrr(int dabl[], int len)
//{
//    double mya = 0;
//    for (int i = 0; i < len; i++) 
//    {
//        mya += dabl[i];
//    }
//    return mya / len;
//}
//задание 1.3
// 
//void masid(int dabl, int kol) {
//    int x = 0;
//    int s = 0;
//    int r = 0;
//    for (int i = 0; i < kol; i++)
//    {
//        if (dabl[i] > 0) 
//        {
//            x++;
//        }
//        else if (dabl[i] < 0) 
//        {
//            s++;
//        }
//        else 
//        {
//            r++;
//        }
//    }
//}


int main()
{
    setlocale(LC_ALL, "Russian");


    //int d1 = 0;
    //int d2 = 0;
    //int m1 = 0;
    //int m2 = 0;
    //int y1 = 0;
    //int y2 = 0;
    //
    //
    //cout << "Введите первый день: " << endl;
    //cin >> d2;
    //
    //cout << "Введите первый месяц: " << endl;
    //cin >> m2;
    //
    //cout << "Введите первый год: " << endl;
    //cin >> y2;
    //
    //cout << "Введите второй день: " << endl;
    //cin >> d1;
    //
    //cout << "Введите второй месяц: " << endl;
    //cin >> m1;
    //
    //cout << "Введите второй год: " << endl << endl;
    //cin >> y1;
    //
    //
    //cout << "Разность в днях между этими датами составляет " << pampam(d1, d2, m1, m2, y1, y2) << " дней" << endl << endl;


    return 0;
}
