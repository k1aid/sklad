#include<iostream>
#include <windows.h>
#include<time.h>


void main() {
    setlocale(LC_ALL, "Russian");
    //int action, line, chooseaction;
    //char symbol, speed;
    //
    //cout << "Введите символ: ";
    //cin >> symbol;
    //cout << "Введите длину линии: ";
    //cin >> line;
    //
    //cout << "\n 1 - Горизонтальная \n 2 - Вертикальная линия \n\n Выберите вариант: ";
    //cin >> chooseaction;
    //cout << "\n f - Быстрая \n n - Нормальная \n s - Медленная \n\n Выберите вариант: ";
    //cin >> speed;
    //
    //switch (chooseaction) {
    //case 1:
    //    for (int i = 0; i < line; i++) {
    //        if (speed == 'f') {
    //            Sleep(20);
    //            cout << symbol;
    //        }
    //        else if (speed == 'n') {
    //            Sleep(400);
    //            cout << symbol;
    //        }
    //        else if (speed == 's') {
    //            Sleep(1000);
    //            cout << symbol;
    //        }
    //    }
    //    break;
    //case 2:
    //    for (int j = 0; j < line; j++) {
    //        if (speed == 'f') {
    //            Sleep(20);
    //            cout << symbol;
    //        }
    //        else if (speed == 'n') {
    //            Sleep(400);
    //            cout << symbol;
    //        }
    //        else if (speed == 's') {
    //            Sleep(1000);
    //            cout << symbol;
    //        }
    //    }
    //    break;
    //}
    // 
    // 
//    int level, a, b, magicNum, userNum;
//    int userChoice, userLives, userPoints, guessed;
//    userPoints = 0;
//    guessed = 0;
//    srand(time(NULL));
//    do {
//        cout << "Welcome to the Game!\n";
//        cout << "Your choice:\n";
//        cout << "1 - 1st level: magic number [1..10]\n";
//        cout << "2 - 2nd level: magic number [10..100]\n";
//        cout << "3 - quit\n";
//        cin >> userChoice;
//        switch (userChoice) {
//        case 1:
//        {
//            cout << "Welcome to the 1st level: "
//                "magic number [1..10]!\n";
//            a = 1;
//            b = 10;
//            userLives = (b - a + 1) / 2;
//            cout << "Bot thinks a number...\n";
//            Sleep(1000);
//            magicNum = a + rand() % (b - a);
//            cout << "Magic number is ready! "
//                "Let's try to guess it!\n";
//            do {
//                cout << "Just now you have ";
//                cout << userLives << "lives.\n";
//                cout << "Try to guess, your number?\n";
//                cin >> userNum;
//                if (userNum == magicNum)
//                {
//                    cout << "You guessed magic number!\n";
//                    guessed = 1;
//                }
//                else {
//                    cout << "Oh! I lost 1 life!\n";
//                    userLives--;
//                    cout << "Just now you have ";
//                    cout << userLives << "\n";
//                    do {
//                        cout << "Do you wish a little "
//                            "hint? It costs"
//                            "1 life!\n";
//                        cout << "Your choice:\n";
//                        cout << "1 - yes\n";
//                        cout << "0 - no\n";
//                        cin >> userChoice;
//                        if (userChoice == 1)
//                        {
//                            if (userNum > magicNum)
//                            {
//                                cout << "Let's give "
//                                    "less...\n";
//                                userLives--;
//                            }
//                            else
//                            {
//                                cout << "Let's give "
//                                    "more...\n";
//                                userLives--;
//                            }
//                        }
//                    } while ((userChoice != 1) &&
//                        (userChoice != 0));
//                }
//            } while ((userLives > 0) && (guessed == 0));
//            userPoints = userLives * 5;
//            if (userPoints == 0)
//            {
//                cout << "You lose!\n";
//            }
//            else
//            {
//                cout << "Your score:" << userPoints;
//                cout << "\n";
//            }
//            break; 
//        }
//        case 2:
//        {
//            cout << "Welcome to the 2nd level: "
//                "magic number [10..100]!\n";
//            a = 10;
//            b = 100;
//            userLives = (b - a + 1) / 4;
//            cout << "Bot thinks a number...\n";
//            Sleep(1000);
//            magicNum = a + rand() % (b - a);
//            cout << "Magic number is ready! "
//                "Let's try to guess it!\n";
//            do {
//                cout << "Just now you have ";
//                cout << userLives << "lives.\n";
//                cout << "Try to guess, your number?\n";
//                cin >> userNum;
//                if (userNum == magicNum)
//                {
//                    cout << "You guessed magic number!\n";
//                    guessed = 1;
//                }
//                else {
//                    cout << "Oh! I lost 1 life!\n";
//                    userLives--;
//                    cout << "Just now you have ";
//                    cout << userLives << "\n";
//                    do {
//                        cout << "Do you wish a little "
//                            "hint? It costs "
//                            "1 life!\n";
//                        cout << "Your choice:\n";
//                        cout << "1 - yes\n";
//                        cout << "0 - no\n";
//                        cin >> userChoice;
//                        if (userChoice == 1)
//                        {
//                            if (userNum > magicNum)
//                            {
//                                cout << "Let's give "
//                                    "less...\n";
//                                userLives--;
//                            }
//                            else
//                            {
//                                cout << "Let's give "
//                                    "more...\n";
//                                userLives--;
//                            }
//                        }
//                    } while ((userChoice != 1) &&
//                        (userChoice != 0));
//                }
//            } while ((userLives > 0) && (guessed == 0));
//            userPoints = userLives * 10;
//            if (userPoints == 0)
//            {
//                cout << "You lose!\n";
//            }
//            else
//            {
//                cout << "Your score:" << userPoints;
//                cout << "\n";
//            }
//            break;
//        }
//        case 3:
//        {
//            cout << "See you!";
//            break;
//        }
//        default:
//            cout << "Wrong menu item!";
// }
// } while (userChoice != 3);
//
//
// return;
//}
//int userChoice;
//int Dice1, Dice2;
//int PlayerPoints, BotPoints;
//srand(time(NULL));
//PlayerPoints = 0;
//BotPoints = 0;
//do {
//    cout << "Welcome to the Game!\n";
//    cout << "Your choice:\n";
//    cout << "1 - roll the dice\n";
//    cout << "2 - quit\n";
//    cin >> userChoice;
//    switch (userChoice) {
//    case 1:
//    {
//        do
//        {
//            cout << "Determining the order "
//                "of play\n";
//            cout << "Player is rolling "
//                "the dice...\n";
//            Sleep(1000);
//            Dice1 = 1 + rand() % 5;
//            cout << "Player's result is ";
//            cout << Dice1 << "\n";
//            switch (Dice1) {
//            case 1:
//            {
//                cout << "===========" << "\n";
//                cout << "|         |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "|    *    |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "===========" << "\n";
//                break;
//            }
//            case 2:
//            {
//                cout << "===========" << "\n";
//                cout << "|         |" << "\n";
//                cout << "|      *  |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "| *       |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "===========" << "\n";
//                break;
//            }
//            case 3:
//            {
//                cout << "===========" << "\n";
//                cout << "|         |" << "\n";
//                cout << "| *       |" << "\n";
//                cout << "|    *    |" << "\n";
//                cout << "|       * |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "===========" << "\n";
//                break;
//            }
//            case 4:
//            {
//                cout << "===========" << "\n";
//                cout << "|         |" << "\n";
//                cout << "| *     * |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "| *     * |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "===========" << "\n";
//                break;
//            }
//            case 5:
//            {
//                cout << "===========" << "\n";
//                cout << "|         |" << "\n";
//                cout << "| *     * |" << "\n";
//                cout << "|    *    |" << "\n";
//                cout << "| *     * |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "===========" << "\n";
//                break;
//            }
//            case 6:
//            {
//                cout << "===========" << "\n";
//                cout << "|         |" << "\n";
//                cout << "| *     * |" << "\n";
//                cout << "| *     * |" << "\n";
//                cout << "| *     * |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "===========" << "\n";
//                break;
//            }
//            }
//            cout << "Bot is rolling "
//                "the dice...\n";
//            Sleep(1000);
//            Dice2 = 1 + rand() % 5;
//            cout << "Bot's result is " << Dice2;
//            cout << "\n";
//            switch (Dice2) {
//            case 1:
//            {
//                cout << "===========" << "\n";
//                cout << "|         |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "|    *    |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "===========" << "\n";
//                break;
//            }
//            case 2:
//            {
//                cout << "===========" << "\n";
//                cout << "|         |" << "\n";
//                cout << "|      *  |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "| *       |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "===========" << "\n";
//                break;
//            }
//            case 3:
//            {
//                cout << "===========" << "\n";
//                cout << "|         |" << "\n";
//                cout << "| *       |" << "\n";
//                cout << "|    *    |" << "\n";
//                cout << "|       * |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "===========" << "\n";
//                break;
//            }
//            case 4:
//            {
//                cout << "===========" << "\n";
//                cout << "|         |" << "\n";
//                cout << "| *     * |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "| *     * |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "===========" << "\n";
//                break;
//            }
//            case 5:
//            {
//                cout << "===========" << "\n";
//                cout << "|         |" << "\n";
//                cout << "| *     * |" << "\n";
//                cout << "|    *    |" << "\n";
//                cout << "| *     * |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "===========" << "\n";
//                break;
//            }
//            case 6:
//            {
//                cout << "===========" << "\n";
//                cout << "|         |" << "\n";
//                cout << "| *     * |" << "\n";
//                cout << "| *     * |" << "\n";
//                cout << "| *     * |" << "\n";
//                cout << "|         |" << "\n";
//                cout << "===========" << "\n";
//                break;
//            }
//            }
//            if (Dice1 == Dice2)
//            {
//                cout << "Once again.\n";
//            }
//} while (Dice1 == Dice2);
//if (Dice1 > Dice2)
//{
//    cout << "Player goes first. "
//        "Bot goes second.\n\n";
//    for (int i = 0; i < 3; i++)
//    {
//        cout << i + 1 << "-round starts:";
//        cout << "\n";
//        do
//        {
//            cout << "Enter '1' to role "
//                "the dice.\n";
//            cin >> userChoice;
//        } while (userChoice != 1);
//        cout << "Player is rolling "
//            "the dice...\n";
//        Sleep(1000);
//        Dice1 = 1 + rand() % 5;
//        Dice2 = 1 + rand() % 5;
//        PlayerPoints = PlayerPoints +
//            Dice1 + Dice2;
//        cout << "Player's result is ";
//        cout << Dice1 << "-" << Dice2 << "\n";
//        switch (Dice1) {
//        case 1:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 2:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|      *  |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *       |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 3:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *       |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "|       * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 4:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 5:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 6:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        }
//        switch (Dice2) {
//        case 1:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 2:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|      *  |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *       |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 3:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *       |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "|       * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 4:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 5:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 6:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        }
//        cout << "Bot is rolling "
//            "the dice...\n";
//        Sleep(1000);
//        Dice1 = 1 + rand() % 5;
//        Dice2 = 1 + rand() % 5;
//        BotPoints = BotPoints + Dice1 +
//            Dice2;
//        cout << "Bot's result is ";
//        cout << Dice1 << "-" << Dice2;
//        cout << "\n";
//        switch (Dice1) {
//        case 1:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 2:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|      *  |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *       |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 3:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *       |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "|       * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 4:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 5:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 6:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        }
//        switch (Dice2) {
//        case 1:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 2:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|      *  |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *       |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 3:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *       |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "|       * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 4:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 5:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 6:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        }
//        cout << i + 1 << "-round results:";
//        cout << "\n";
//        cout << "PlayerPoints - ";
//        cout << PlayerPoints << "\n";
//        cout << "BotPoints - ";
//        cout << BotPoints << "\n\n";
//        Sleep(1000);
//}
//}
//else
//{
//    cout << "Bot goes first. "
//        "Player goes second.\n\n";
//    for (int i = 0; i < 3; i++)
//    {
//        cout << i + 1;
//        cout << "-round starts:" << "\n";
//        cout << "Bot is rolling the dice...\n";
//        Sleep(1000);
//        Dice1 = 1 + rand() % 5;
//        Dice2 = 1 + rand() % 5;
//        BotPoints = BotPoints + Dice1 +
//            Dice2;
//        cout << "Bot's result is ";
//        cout << Dice1 << "-" << Dice2;
//        cout << "\n";
//        switch (Dice1) {
//        case 1:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 2:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|      *  |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *       |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 3:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *       |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "|       * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 4:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 5:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 6:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        switch (Dice2) {
//        case 1:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 2:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|      *  |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *       |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 3:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *       |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "|       * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 4:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 5:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 6:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        }
//        do
//        {
//            cout << "Enter '1' to role "
//                "the dice.\n";
//            cin >> userChoice;
//        } while (userChoice != 1);
//        cout << "Player is rolling "
//            "the dice...\n";
//        Sleep(1000);
//        Dice1 = 1 + rand() % 5;
//        Dice2 = 1 + rand() % 5;
//        PlayerPoints = PlayerPoints +
//            Dice1 + Dice2;
//        cout << "Player's result is ";
//        cout << Dice1 << "-" << Dice2;
//        cout << "\n";
//        switch (Dice1) {
//        case 1:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 2:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|      *  |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *       |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 3:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *       |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "|       * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 4:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 5:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 6:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        }
//        switch (Dice2) {
//        case 1:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 2:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "|      *  |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *       |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 3:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *       |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "|       * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 4:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 5:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|    *    |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        case 6:
//        {
//            cout << "===========" << "\n";
//            cout << "|         |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "| *     * |" << "\n";
//            cout << "|         |" << "\n";
//            cout << "===========" << "\n";
//            break;
//        }
//        }
//        cout << i + 1;
//        cout << "-round results:";
//        cout << "\n";
//        cout << "BotPoints - ";
//        cout << BotPoints;
//        cout << "\n\n";
//        cout << "PlayerPoints - ";
//        cout << PlayerPoints << "\n";
//        Sleep(1000);
//}
//}
//cout << "Game results:" << "\n";
//cout << "PlayerPoints - ";
//cout << PlayerPoints << "\n";
//cout << "BotPoints - " << BotPoints;
//cout << "\n\n";
//if (PlayerPoints > BotPoints)
//{
//    cout << "The player is the winner!";
//    cout << "\n";
//}
//else if (PlayerPoints < BotPoints)
//{
//    cout << "The bot is the winner!";
//    cout << "\n";
//}
//else
//{
//    cout << "The draw!" << "\n";
//}
//break;
//}
//case 2:
//{
//    cout << "See you!";
//    break;
//}
//default:
//    cout << "Wrong menu item!";
// }
// } while (userChoice != 2);
// return 0;
//}