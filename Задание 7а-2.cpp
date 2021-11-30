#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int size; // храним размер ячейки
    cout << "Привет! Какой размер ячейки?  \n";
    cin >> size;
    setlocale(LC_ALL, ".866");
    for (int i = 0; i < 8; i++) // формируем строки. Их будет 8
    {
        if (i % 2 == 0) // разбиваем строки на четные и нечетные
        {
            for (int j = 0; j < size; j++) //формируем подстроки вертикальные, внутри высоты 1 ячейки    
            {
                for (int s = 0; s < 8; s++) //отрисовываем ячейку, но делим также на черную и белую по признаку четности цикла
                {
                    if (s % 2 == 0)
                    {
                        for (int q = 0; q < size; q++)
                        {
                            cout << char(219); cout << char(219); //белая 
                        }
                    }
                    else {
                        for (int q = 0; q < size; q++)
                        {
                            cout << "  "; // черная 
                        }
                    }
                }
                cout << "\n";
            }
        }
        else
        {
            for (int j = 0; j < size; j++) //отрисовываем нечетные подстроки
            {
                for (int s = 0; s < 8; s++)//отрисовываем ячейку 
                {
                    if (s % 2 == 0) //отрисовываем ячейки, но здесь меняем меставми черные и белые. Так получится именно шахматный рисунок 
                    {
                        for (int q = 0; q < size; q++)
                        {
                            cout << "  "; // черная 
                        }
                    }
                    else {
                        for (int q = 0; q < size; q++)
                        {
                            cout << char(219); cout << char(219); //белая 
                        }
                    }
                }
                cout << "\n";
            }
        }
    }
}