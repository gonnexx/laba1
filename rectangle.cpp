#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double length, width;
    
    cout << "=== ПРЯМОУГОЛЬНИК ===" << endl;
    cout << "Введите длину: ";
    cin >> length;
    cout << "Введите ширину: ";
    cin >> width;
    
    if (length <= 0 || width <= 0) {
        cout << "Ошибка: стороны должны быть положительными!" << endl;
        return 1;
    }
    
    double perimeter = 2 * (length + width);
    double area = length * width;
    double diagonal = sqrt(length * length + width * width);
    
    cout << "\n--- РЕЗУЛЬТАТЫ ---" << endl;
    cout << "Длина: " << length << endl;
    cout << "Ширина: " << width << endl;
    cout << "Периметр: " << perimeter << endl;
    cout << "Площадь: " << area << endl;
    cout << "Длина диагонали: " << diagonal << endl;
    cout <<"ТЫ МОЛОДЕЦ"<< endl;
    return 0;
}