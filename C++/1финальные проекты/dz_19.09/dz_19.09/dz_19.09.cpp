#include <iostream>
#include <string>

using namespace std;

string remove(const string& str, int index) 
{
    return str.substr(0, index) + str.substr(index + 1);
}

void Delete(char arr, char c)
{
    const char star = arr;

    while (star)
    {
        if (star != c) {
            arr = star;
            ++arr;
        }
    }
    arr = '0';
}


string insertChar(const string& str, char ch, int position) 
{
    string result = str;
    result.insert(position, 0, ch);
    return result;
}

int determine(const string& a, char b) {
    int vvod = 0;

    for (char c : a) {
        if (c == b) {
            vvod++;
        }
    }
    return vvod;
}

int main()
{
    setlocale(LC_ALL, "");

    //string tochki;
    //
    //cout << "Введите строку: ";
    //getline(cin, tochki);
    //
    //
    //for (char& c : tochki)
    //{
    //    if (c == '.') 
    //    {
    //        c = '!';
    //    }
    //}
    //
    //cout << "Результат: " << tochki << endl;

    string input;
    int bykv = 0; 
    int sifr = 0;
    int other = 0;


    cout << "Введите строку: ";
    getline(cin, input);


    for (char c : input) 
    {
        if (isalpha(c)) 
        {
            bykv++;
        }
        else if (isdigit(c)) 
        {
            sifr++;
        }
        else 
        {
            other++;
        }
    }

    cout << "Количество букв: " << bykv << endl;
    cout << "Количество цифр: " << sifr << endl;
    cout << "Количество остальных символов: " << other << endl;

    return 0;
    
}