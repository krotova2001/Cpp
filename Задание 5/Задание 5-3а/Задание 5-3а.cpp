#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int res = 0; // результат будет целым
    int i = 0; // задаем счетчик цикла
    while (i <= 1000) {
        res += i;
        i++;
    }
    cout << "Сумма всех целых чисел от 1 до 1000 включительно равна " << res << endl;
}