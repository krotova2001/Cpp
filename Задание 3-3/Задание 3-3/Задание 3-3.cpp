#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	
	const float ai_92 = 46.50; //зададим жестко цены
	const float ai_95 = 49.53;
	const float ai_98 = 53.80;

	float length, rate; //Эти показатели тоже оставим дробными

	cout << "Привет. Введи расстояние (км)?\n";
	cin >> length;
	cout << "Сколько тво ласточка кушает литров на 100 км (руб)?\n";
	cin >> rate;
	
	float rate_92 = (rate / 100) * ai_92 * length;
	float rate_95 = (rate / 100) * ai_95 * length;
	float rate_98 = (rate / 100) * ai_98 * length;

	cout << "Стоимость поездки на 92м | " << rate_92 << "руб.\n";
	cout << "Стоимость поездки на 95м | " << rate_95 << "руб.\n";
	cout << "Стоимость поездки на 98м | " << rate_98 << "руб.\n";

	return 0;
}
