#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	float length, t; /*Объявим переменные времени и пути.
	Они должны быть как минимум, с плавающей точкой, так как значение может быть дробным, и при делении результат тоже может быть дробным.
	Целочисленное время и дробная скорость у меня не заработали*/

	cout << "Привет. Введи расстояние до аэропорта (км)?\n";
	cin >> length;
	cout << "А теперь время, за которое нужно доехать (мин)?\n";
	cin >> t;
	float v = length / (t / 60); // здесь, попутно вычислению скорости, приведем время в минутах в часы
	cout << "Скорость, с ктороый ты успеешь доехать вовремя " << v << " км/ч";
	return 0;
}
