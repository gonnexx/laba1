#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введите стороны: ";
    cin >> a >> b >> c;
    
    // Проверка на отрицательные стороны
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Ошибка: Стороны не могут быть отрицательными или равны нулю!" << endl;
        return 1;
    }
    
    // Проверка существования треугольника
    if (a + b > c && a + c > b && b + c > a) {
        
        cout << "P = " << a + b + c << endl;
        
        double p = (a + b + c) / 2;
        cout << "S = " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
        
        // Проверка на равнобедренность (ровно две стороны равны)
        if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
            cout << "Равнобедренный" << endl;
        else
            cout << "Не равнобедренный" << endl;
    }
    else {
        cout << "Ошибка: Треугольник с такими сторонами не существует!" << endl;
    }
    
    return 0;
}
