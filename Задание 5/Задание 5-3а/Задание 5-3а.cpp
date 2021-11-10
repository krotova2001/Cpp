#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    float res = 0; // результат может быть не целым
    int sum = 0; // Промежуточная переменная для хранения суммы чисел
    int i = 0; // задаем счетчик цикла
    while (i <= 1000) {
        sum += i;
        i++;
    }
    cout << "Среднее арифметическое всех целых чисел от 1 до 1000 включительно равна " << res/1000 << endl;
}
