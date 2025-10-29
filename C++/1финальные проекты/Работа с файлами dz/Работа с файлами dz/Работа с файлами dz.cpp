#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string SOGL = "бвгджзйклмнпрстфхцчшщъьБВГДЖЗЙКЛМНПРСТФХЦЧШЩЪЬ";
string GLAS = "аеэиоуюяыАЕЭИОУЮБЫ";
string NUMB = "1234567890";

// 2 задание
bool search(char ch, string arr) {
    for (size_t i = 0; i < arr.size(); i++) {
        if (ch == arr[i]) {
            return true;
        }
    }
};

int symFile() {
    int sym = 0;
    ifstream N("file.txt");
    if (!N)
    {
        exit(-1);
    }
    else
    {
        while (!N.eof())
        {
            char ch;
            N >> ch;
            sym++;
        }
    }

    return sym - 1;
}

int strFile() {
    int str = 0;
    ifstream N("file.txt");
    if (!N) {
        exit(-1);
    }
    else {
        string line;
        while (getline(N, line)) {
            str++;
        }
    }
    N.close();
    return str;
}

int glasFile() {
    int glas = 0;
    ifstream N("file.txt");
    if (!N)
    {
        exit(-1);
    }
    else
    {
        while (!N.eof())
        {
            char ch;
            N >> ch;
            if (search(ch, GLAS) == true) {
                glas++;
            }
        }
    }
    N.close();
    return glas;
}

int soglFile() {
    int sogl = 0;
    ifstream N("file.txt");
    if (!N)
    {
        exit(-1);
    }
    else
    {
        while (!N.eof())
        {
            char ch;
            N >> ch;
            if (search(ch, SOGL) == true) {
                sogl++;
            }
        }
    }
    N.close();
    return sogl;
}

int numbFile() {
    int numb = 0;
    ifstream N("file.txt");
    if (!N)
    {
        exit(-1);
    }
    else
    {
        while (!N.eof())
        {
            char ch;
            N >> ch;
            if (search(ch, NUMB) == true) {
                numb++;
            }
        }
    }
    N.close();
    return numb;
}

// 3 задание
string encryptText(const string& text, int shift)
{
    string encryptedText = " ";
    int as = text.length();

    for (int i = 0; i < as; i++) { 
        char currentChar = text[i];

        if (isalpha(currentChar)) {
            char base = islower(currentChar) ? 'a' : 'A';
            char encryptedChar = (currentChar - base + shift) % 26 + base;
            encryptedText += encryptedChar;
        }
        else {
            encryptedText += currentChar;
        }
    }

    return encryptedText;
}

int main()
{
    setlocale(LC_ALL, "");
    
    // 2 задание
    int SYM = symFile();
    int STR = strFile();
    int Glas = glasFile();
    int Sogl = soglFile();
    int Numb = numbFile();
    
    cout << "Символов в Файле: " << SYM << endl;
    cout << "Строк в Файле: " << STR << endl;
    cout << "Гласных в Файле: " << Glas << endl;
    cout << "Согласных в Файле: " << Sogl << endl;
    cout << "Чисел в Файле: " << Numb << endl;
    
    ofstream out("out.txt");
    out << "Символов в Файле: " << SYM << endl;
    out << "Строк в Файле: " << STR << endl;
    out << "Гласных в Файле: " << Glas << endl;
    out << "Согласных в Файле: " << Sogl << endl;
    out << "Чисел в Файле: " << Numb << endl;
    out.close();
    
    cout << endl;

    // 3 задание
    string  inputFile = "input.txt";
    string outputFile = "output.txt";
    int sdvig = 3;

    ifstream input(inputFile);

    if (!input)
    {
        cout << "Ошибка открытия файла: " << inputFile << endl;
        return 1;
    }
    
    string content((istreambuf_iterator<char>(input)), (istreambuf_iterator<char>()));

    input.close();

    string encryptedText = encryptText(content, sdvig);

    ofstream output(outputFile); 

    if (!output)
    {
        cout << "Ошибка открытия файла: " << outputFile << endl;
        return 1;
    }

    output << encryptedText;

    output.close();

    cout << "Шифрование завершено! Результат работы записан в файл output.txt " << endl;

    return 0;
}