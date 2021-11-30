#include <iostream>
using namespace std;

/*С вашего позволения, 
я попробую часть меню рисовать квадратиками, как мы делали на уроке,
а часть - звездочками и тире, как трребуется в задаче*/

int main()
{
    setlocale(LC_ALL, "Russian");
    int sel;
    do { // выведем всё наше меню целиком, обернутое циклом do-while 
        cout << "------------------------------------------------\n";
        cout << "                   МЕНЮ\n";
        cout << " -----------------------------------------------\n";
        cout << "1 - Вариант 1                       \n";
        cout << "2 - Вариант 2                         \n";
        cout << "3 - Вариант 3                                   \n";
        cout << "4 - Вариант 4                                    \n";
        cout << "5 - Вариант 5                                    \n";
        cout << "6 - Вариант 6                                    \n";
        cout << "7 - Вариант 7                                   \n";
        cout << "8 - Вариант 8                                    \n";
        cout << "9 - Вариант 9                                    \n";
        cout << "10 - Вариант 10                                    \n";
        cout << " ----------------------------------------------\n";
        cout << "0 - Выход                                      \n";
        cout << " ----------------------------------------------\n\n";
        cout << " Введи цифру\n";
        cin >> sel;
        switch (sel)
        {
        case 1: //одна лесенка
            setlocale(LC_ALL, ".866"); //настроим кодировку для рисования квадатиков
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++) {
                    if (j >= i) { cout << char(219); cout << char(219); }
                    else { cout << "  "; }
                }
                cout << "\n";
            }
            setlocale(LC_ALL, "Russian");
            break;

        case 2: //другая лесенка
            setlocale(LC_ALL, ".866"); //настроим кодировку для рисования квадатиков
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++) {
                    if (j < i) { cout << char(219); cout << char(219); }
                    else { cout << "  "; }
                }
                cout << "\n";
            }
            setlocale(LC_ALL, "Russian");
            break;

        case 3: //треугольник сверху
            setlocale(LC_ALL, ".866"); //настроим кодировку для рисования квадатиков
            for (int i = 1; i < 10; i++)
            {for (int j = 0; j < 10; j++)
                {if (j >= i && j <= 10 - i) {cout << char(219); cout << char(219);}
                    else  cout << "  ";}
                cout << "\n";}
            setlocale(LC_ALL, "Russian");
            break;
       
        case 4: //треугольник снизу
            setlocale(LC_ALL, ".866"); //настроим кодировку для рисования квадатиков
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {if (j >= i || j <= 10 - i) 
                    {cout << "  ";}
                    else { cout << char(219); cout << char(219); }
                }
                cout << "\n";
            }
            setlocale(LC_ALL, "Russian");
            break;
        
        case 5: //песочные часы
            setlocale(LC_ALL, ".866"); //тут самое сложное
            for (int i = 1; i < 10; i++)
            {                
                    cout << char(219); cout << char(219);

                    for (int j = 1; j < 10; j++)
                    {
                        if (
                            ((j >= i)&& (j<10-i))|| ((j <=i)&&(j>= 10 - i))
                            )
                        {
                            cout << "  ";
                        }
                        else { cout << char(219); cout << char(219); }
                    }
                    cout << "\n";
            }
            setlocale(LC_ALL, "Russian");
            break;
        
        case 6: //песочные часы в профиль. Но не совсем гладко. Честно, тут не знаю как исправить
            setlocale(LC_ALL, ".866"); //тут самое сложное
            for (int i = 0; i < 10; i++)
            {
                cout << char(219); cout << char(219);

                for (int j = 0; j < 10; j++)
                {
                    if (
                        ((i >= j) && (i < 10 - j)) || ((i <= j) && (i >= 10 - j))
                        )
                    {
                        cout << "  ";
                    }
                    else { cout << char(219); cout << char(219); }
                }
                cout << "\n";
            }
            setlocale(LC_ALL, "Russian");
            break;


        case 7: //треугольник слева
            setlocale(LC_ALL, ".866"); //настроим кодировку для рисования квадатиков
            for (int i = 1; i < 10; i++)
            {
                for (int j = 1; j < 10; j++)
                {
                    if (j <= i && j <= 10 - i) { cout << char(219); cout << char(219); }
                    else  cout << "  ";
                }
                cout << "\n";
            }
            setlocale(LC_ALL, "Russian");
            break;

        case 8: //треугольник справа
            setlocale(LC_ALL, ".866"); //настроим кодировку для рисования квадатиков
            for (int i = 1; i < 10; i++)
            {for (int j = 1; j < 10; j++)
                {if (j >= i && j >= 10-i)
                    {cout << char(219); cout << char(219);}
                    else  cout << "  ";}
                cout << "\n";}
            setlocale(LC_ALL, "Russian");
            break;

        case 9: //обратная лесенка
            setlocale(LC_ALL, ".866"); //настроим кодировку для рисования квадатиков
            for (int i = 0; i < 12; i++)
            {
                for (int j = 0; j < 10; j++) {
                    if (j <= 10 - i) { cout << char(219); cout << char(219); }
                    else { cout << "  "; }
                }
                cout << "\n";
            }
            setlocale(LC_ALL, "Russian");
            break;

        case 10: //последняя лесенка
            setlocale(LC_ALL, ".866"); //настроим кодировку для рисования квадатиков
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++) {
                    if (j >= 10-i) { cout << char(219); cout << char(219); }
                    else { cout << "  "; }
                }
                cout << "\n";
            }
            setlocale(LC_ALL, "Russian");
            break;
        }
    } while (sel != 0);
}