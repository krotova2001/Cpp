﻿#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int num, i; //значение пользователя и счетчик цикла
    cout << "Привет! Введи цифру\n";
    cin >> num;
    i = 2;// начнем с 2, зачем нам таблица умножения на 0
    while (i < 10)
    {
        cout << num << "*" << i << "=" << num * i << endl;
        i++;
    }
}