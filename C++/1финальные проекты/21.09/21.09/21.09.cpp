#include <iostream> 

using namespace std;


int mystrcmp(char const* str1, char const* str2)
{
    int result = 0;
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if ((int)str1[i] > (int)str2[i])
        {
            result = 1;
            break;
        }
        else if ((int)str1[i] < (int)str2[i])
        {
            result = -1;
            break;
        }
    }
    return result;
}


int stringToNumber(char const* str)
{
    int result = 0;
    int number;
    for (int i = 0; str[i] != '\0'; i++)
    {
        number = str[i];
        if (number >= 48 || number <= 57)
        {
            result = result * 10 + (number - 48);
        }
    }
    return result;
}


char* numberToString(int number)
{
    int numberCount = 0;
    int number1 = number;
    do
    {
        number1 /= 10;
        numberCount++;
    } while (number1 % 10 != 0);
    cout << "numberCount = " << numberCount << endl;
    char* stringNumber = new char[numberCount + 1];
    stringNumber[numberCount] = '\0';
    for (int i = numberCount - 1; i >= 0; i--)
    {
        stringNumber[i] = (char)(48 + number % 10);
        number /= 10;
    }
    return stringNumber;
    delete[] stringNumber;
}


char* upperCase(char* str1)
{
    int length = strlen(str1);
    char* bigLettersStr = new char[length + 1];
    bigLettersStr[length] = '\0';
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if ((int)str1[i] >= 97 && (int)str1[i] <= 122)
        {
            bigLettersStr[i] = (char)((int)str1[i] - 32);
        }
        else
        {
            bigLettersStr[i] = str1[i];
        }
    }
    return bigLettersStr;
    delete[] bigLettersStr;
}


char* lowerCase(char* str1)
{
    int length = strlen(str1);
    char* smallLettersStr = new char[length + 1];
    smallLettersStr[length] = '\0';
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if ((int)str1[i] >= 65 && (int)str1[i] <= 90)
        {
            smallLettersStr[i] = (char)((int)str1[i] + 32);
        }
        else
        {
            smallLettersStr[i] = str1[i];
        }
    }
    return smallLettersStr;
    delete[] smallLettersStr;
}


char* mystrrev(char* str)
{
    int length = strlen(str);
    char* reverseStr = new char[length + 1];
    reverseStr[length] = '\0';
    for (int i = 0; str[i] != '\0'; i++)
    {
        reverseStr[length - 1 - i] = str[i];
    }
    return reverseStr;
    delete[] reverseStr;
}



int main()
{
	setlocale(LC_ALL, "");

    {
        int const massivSize = 11;
        char const str1[massivSize] = { 'a', 's', 'd', 'f', 'g', 'h', 'j', '1', '2', '3' };
        char const str2[massivSize] = { 'a', 's', 'd', 'f', 'g', 'h', 'j', '1', '2', '3' };
        char const str3[massivSize] = { 'a', 's', 'd', 'f', 'g', 'h', 'j', '1', '2', '3' };


        cout << "Результат сравнения massiv1 и massiv2 = " << mystrcmp(str1, str2) << endl;
        cout << "Результат сравнения massiv2 и massiv3 = " << mystrcmp(str2, str3) << endl;


        char const str4[massivSize] = "1234565432";


        cout << "Массив в int = " << stringToNumber(str4) << endl;


        int number = 151515;
        cout << "Количество в int = " << number << endl <<
            "Номер в char = " << numberToString(number) << endl;


        char str5[massivSize] = "xbzzafdaza";
        cout << "Оригинал = " << str5 << endl <<
            "Заглавные буквы = " << upperCase(str5) << endl;


        char str6[massivSize] = "XBZZAFDAZA";
        cout << "Оригинал = " << str6 << endl <<
            "Строчные буквы = " << lowerCase(str6) << endl;


        cout << "Оригинал = " << str6 << endl <<
            "Обратная = " << mystrrev(str6) << endl;

    }

}