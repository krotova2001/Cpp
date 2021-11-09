#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	const float PI = 3.1415; //точно float нам вполне хватит, не будем разбрасываться памятью
	float L; //будущая длина окружности
	cout << "Введите длину окружности\n";
	cin >> L;
	float R = L / (2 * PI); //создадим промежуточную вспомогателдьную переменную радиуса. Хотя можно было бы и без нее.
	float S = PI * R * R; // площадь окружности

	cout << "Площадь круга равна " << S;
	return 0;
}
