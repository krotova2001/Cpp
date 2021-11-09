#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	const float  price = 75; // кажется, такой была посленяя цена у нас в гроде за час
	float s_start, m_start, h_start, s_end, m_end, h_end; //Обьявим переменные значений времени
	

	cout << "Привет. Введи время начала использования скутера? Часы:\n";
	cin >> h_start;
	cout << "Минуты:\n";
	cin >> m_start;
	cout << "Секунды:\n";
	cin >> s_start;

	cout << "А теперь время, во сколько поездка закончится? Часы:\n";
	cin >> h_end;
	cout << "Минуты:\n";
	cin >> m_end;
	cout << "Секунды:\n";
	cin >> s_end;
	
	float t_start = h_start + s_start/60 + s_start/3600 ;//приведем значения времени из составных к единому, в часах	
	float t_stop = h_end + s_end / 60 + s_end / 3600;
	float time = t_stop - t_start; //общее время использования
	if (time >= 0)
	{
		float total_price = price * time; // общая стоимость
		cout << "Поездка обошлась тебе в " << total_price << " рублей";
	}
	else { cout << "Ошибка ввода времени"; }
	
	// честно, мне не удалось сделать проверку таким способом (time >= 0 ? time : "Ошибка ввода времени"); 

	return 0;
}
