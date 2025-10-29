#include <iostream>
using namespace std;

int main() {

    setlocale(LC_CTYPE, "");

    //Задание №2
    //int digitals[10]; 
    //
    //cout << "Введите 10 чисел для заполнения массива: " << endl;
    //
    //for (int i = 0; i < 10; i++) {
    //    cin >> digitals[i]; 
    //}
    //
    //
    //for (int i = 0; i < 10; i++) {
    //    for (int j = 0; j < 9; j++) {
    //        if (digitals[j] > digitals[j + 1]) {
    //            int b = digitals[j]; 
    //            digitals[j] = digitals[j + 1]; 
    //            digitals[j + 1] = b; 
    //        }
    //    }
    //}
    //
    //
    //cout << "Массив в отсортированном виде: ";
    //
    //for (int i = 0; i < 10; i++) {
    //    cout << digitals[i] << " "; 
    //}


    //Задание №1
    //constexpr int MIN = 1, MAX = 10;
    //
    //int min = MIN, max = MAX;
    //
    //
    //while (true) {
    //
    //    int middle = (min + max) / 2;
    //
    //    string answer;
    //
    //    cout << "Задуманное число меньше " << middle << " (д/н)?" << endl;
    //    cin >> answer;
    //
    //    if (answer == "д" || answer == "Д") {
    //        max = middle - 1;
    //    }
    //
    //
    //    else {
    //        cout << "Задуманное число больше " << middle << " (д/н)?" << endl;
    //        cin >> answer;
    //
    //
    //
    //        if (answer == "д" || answer == "Д") {
    //            min = middle + 1;
    //        }
    //
    //
    //        else {
    //            cout << "Вы задумали число " << middle << endl;
    //            break;
    //        }
    //
    //    }
    //
    //}

    return 0;
}