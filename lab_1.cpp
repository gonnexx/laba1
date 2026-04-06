#include <iostream>
#include <cmath>

using namespace std;

double perimeter(double a, double b, double c, double d) {
    return a + b + c + d;
}

double area(double a, double b, double h) {
    return ((a + b) * h) / 2;
}

double midline(double a, double b) {
    return (a + b) / 2;
}

int main() {
    double a, b, c, d, h;
    
    cout << "Введите длину первого основания (a): ";
    cin >> a;
    
    cout << "Введите длину второго основания (b): ";
    cin >> b;
    
    cout << "Введите длину левой боковой стороны (c): ";
    cin >> c;
    
    cout << "Введите длину правой боковой стороны (d): ";
    cin >> d;
    
    cout << "Введите высоту трапеции (h): ";
    cin >> h;
    
    if(a <= 0 || b <= 0 || c <= 0 || d <= 0 || h <= 0) {
        cout << "ERROR" << endl;
        return 1;
    }
    
    if(h > c || h > d) {
        cout << "ERROR" << endl;
        return 1;
    }
    
    if(a + b + c <= d || a + b + d <= c || a + c + d <= b || b + c + d <= a) {
        cout << "ERROR" << endl;
        return 1;
    }
    
    cout << "\nРезультаты вычислений:" << endl;
    cout << "Периметр трапеции: " << perimeter(a, b, c, d) << endl;
    cout << "Площадь трапеции: " << area(a, b, h) << endl;
    cout << "Длина средней линии: " << midline(a, b) << endl;
    
    return 0;
}