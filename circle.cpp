#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    const double PI = 3.14159265358979323846;
    
    cout << "=== ОКРУЖНОСТЬ ===" << endl;
    cout << "Введите радиус: ";
    cin >> radius;
    
    // Проверка корректности данных
    if (radius <= 0) {
        cout << "Ошибка: радиус должен быть положительным!" << endl;
        return 1;
    }
    
    // Вычисление параметров
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;
    
    // Вывод результатов
    cout << "\n--- РЕЗУЛЬТАТЫ ---" << endl;
    cout << "Радиус: " << radius << endl;
    cout << "Длина окружности: " << circumference << endl;
    cout << "Площадь круга: " << area << endl;
    
    // Дополнительно: площадь кругового сектора
    char choice;
    cout << "\nВычислить площадь кругового сектора? (y/n): ";
    cin >> choice;
    
    if (choice == 'y' || choice == 'Y') {
        double angle;
        cout << "Введите угол сектора (в градусах): ";
        cin >> angle;
        
        if (angle <= 0 || angle > 360) {
            cout << "Ошибка: угол должен быть от 0 до 360 градусов!" << endl;
            return 1;
        }
        
        double sectorArea = (angle / 360.0) * area;
        cout << "Площадь кругового сектора: " << sectorArea << endl;
    }
    
    return 0;
}