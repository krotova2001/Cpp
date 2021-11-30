#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int people;
    int price_total = 0;
    cout <<"Рады приветствовать вас в нашем кафе! Сколько человек будет ? ";
    cin >> people;
    
    for (int i = 1; i <= people; i++) {
        int price, sel; // храним переменную выбора меню и сумму на одного человека
        cout << "Привет! Человек " << i << " Введите ваш заказ \n";
        price = 0; //обнуляем цену для каждого нового человека
        do {
            cout << "------------------------------------------------\n";
            cout << "                   МЕНЮ\n";
            cout << " -----------------------------------------------\n";
            cout << "1 - Кофе - 100                        \n";
            cout << "2 - Яичница - 200 \n";
            cout << "3 - Салат - 300                  \n";
            cout << "4 - Шлепнуть официантку - 5000             \n";
            cout << " ----------------------------------------------\n";
            cout << "0 - Конец заказа                                      \n";
            cout << " ----------------------------------------------\n\n";
            cout << " Введи пункт меню\n";
            cin >> sel;
            switch (sel)
            {
            case 1:
                price += 100;
                break;
            case 2:
                price += 200;
                break;
            case 3:
                price += 300;
                break;
            case 4:
                price += 5000;
            }
        } while (sel != 0); // выход из меню
        cout << price; // посмотрим сумму заказа на одного
        cout << "\n";
        cout << "\n";
        cout << "\n";
        price_total += price; // суммируем в общий счет

    }
    cout << "Общий счет   " << price_total;

}
