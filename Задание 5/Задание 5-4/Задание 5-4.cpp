#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, res; // результат будет целым
    cout << "Введи целое число от 1 до 20\n";
    cin >> a;
    if (a >= 1 && a <= 20) {
        int i = a; //инициализируем счетчик цикла внутри уловия 
        res = i; //начинаем накапливать произведение с минимального значения
        while (i <= 20) {
            res *= i;
            i++;
        }
        cout << "Произведение всех целых чисел от " << a << " до 20 равна " << res << endl;
    }
    else cout << "Ошибка ввода";
}