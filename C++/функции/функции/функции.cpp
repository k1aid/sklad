#include <iostream>
using namespace std;

int sumInRange(int start, int end) {
    int sum = 0;
    for (int i = start + 1; i < end; i++) {
        sum += i;
    }
    return sum;
}

int powInnumber(int number, int powNum){

int result = 1;
for (int i = 0; i < powNum - 1; i++) result *= number;
return result;
    }

    void main() {
        int number, powNum;
        cout << "Введите число : " << endl;
        cin >> number;
        cout << "Введите возведение в степень : " << endl;
        cin >> powNum;
        cout << "Результат = " << powInnumber(number, powNum) << endl;
    }

#include <iostream>
    using namespace std;

    int digit(int x, int y)
    {
        for (int i = x; i < y; i++)
        {
            int result = 0;
            for (int j = 1; j < i; j++)
            {
                if ((i % j) == 0)
                {
                    result += j;
                }
            }
            if (result == i && result)
            {
                cout << result << " \n";

            }
        }
        return 0;
    }

    void main()
    {
        int res = digit(0, 9000);

    }