#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
   
    int num1, num2, num3, num4, num5, num6, num7; //все переменные которые нам понадобятся
    cout << "Привет! Введи семь целых чисел\n";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;
    cin >> num6;
    cin >> num7;
    //есть несколько алгоритмов определения максимального числа. В сновном, это попарные сравнения в массивах с помощью циклов. 
    // Но обойдемся без этого
    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 && num1 > num6 && num1 > num7) cout << num1;
    else if (num2 > num3 && num2 > num4 && num2 > num5 && num2 > num6 && num2 > num7) (cout << num2);
    else if (num3 > num4 && num3 > num5 && num3 > num6 && num3 > num7) (cout << num3);
    else if (num4 > num5 && num4 > num6 && num4 > num7) (cout << num4);
    else if (num5 > num6 && num5 > num7) (cout << num5);
    else if (num6 > num7) (cout << num6);
    else if (cout << num7);

    return 0;
}