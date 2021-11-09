#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	float V, T, A; //скорость, время и ускорение. Не забываем про единообразие единиц измерения

	cout << "Скорость V (км/час)\n";
	cin >> V;
	cout << "Время T (час)\n";
	cin >> T;
	cout << "Ускорение\n";
	cin >> A;
	float S = V * T + (A* T * T) / 2; //вычисляем результат по ходу
	cout << "ПРойденное расстояние S = " << S;
	return 0;
}
