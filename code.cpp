#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введите стороны: ";
    cin >> a >> b >> c;
    
    // Проверка существования треугольника
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Ошибка: Треугольник с такими сторонами не существует!" << endl;
        return 1;
    }
    
    cout << "P = " << a + b + c << endl;
    
    double p = (a + b + c) / 2;
    cout << "S = " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
    
    // Равнобедренный = ровно две стороны равны, а третья отличается
    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
        cout << "Равнобедренный" << endl;
    else
        cout << "Не равнобедренный" << endl;
    
    return 0;
}
