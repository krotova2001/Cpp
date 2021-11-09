#include <iostream>
using namespace std;

int main()
{
setlocale(LC_CTYPE, "rus");

float dist_ab, dist_bc, weight, tank_add; //переменные на ввод пользователя
int rate=0;// сюда будет считаться расход топлива. Если не инициализировать со значением 0, то в случае перегруза выдаст ошибку о неиспользуемой переменной
const float tank = 300; // емкость бака
cout << "Привет! Какое растояние от A до B?\n";
cin >> dist_ab;
cout << "Какое растояние от B до C?\n";
cin >> dist_bc;
cout << "Сколько груза хотите перевести (кг)? \n";
cin >> weight;
if (weight < 500) rate = 1; //в цепочке условий высчитываем расход
else if (weight < 1000) rate = 4;
else if (weight < 1500) rate = 7;
else if (weight <= 2000) rate = 9;
else if (weight > 2000) cout << "Слишком много груза, не взлетим";
else if (weight < 0) cout << "НЕправильное значение груза";
   
if (dist_ab > (300 / rate) || dist_bc > (300 / rate))  cout << "Слишком большое расстояние между пунктами"; // проверям, долетим ли мы вообще куда-нибудь
   
else {
    //хотя задача этого не просит, здесь отсавим возможность проверки нужна ли вообще дозаправка
    //if ((dist_ab + dist_bc) <= 300 / rate)  cout << "В пункте \"B\" дозаправка не нужна "; esle { 
        tank_add = dist_ab * rate;
        cout << "В пункте \"B\" нам надо залить еще " << tank_add << " литров";
    //}
};

return 0;
}