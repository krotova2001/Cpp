#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int num, pow, res; // достаточно для хранения переменных
	cout << "Введите целое число " << endl;
	cin >> num;
	cout << "В какую степень возвести? " << endl;
	cin >> pow;
	int i = 1; //задаем счетчик цикла, но с 1, иначе получим лишнюю степень
	res = num; // не будем изменять первоначальную num, вдруг еще понадбится
	while (i != pow) {
		res = res * num;
			i++;
	}
	cout << "Результат " << res << endl;

	
}