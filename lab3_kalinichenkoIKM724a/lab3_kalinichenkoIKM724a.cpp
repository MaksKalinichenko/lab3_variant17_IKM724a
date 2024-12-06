#include <iostream>
#include <algorithm> // для std::min

int main() {
    setlocale(LC_CTYPE, "ukr"); // дозволити використання української мови

    // Заданные значения
    double r = 0.7; // Радиус шара
    double a = 2.0; // Сторона a
    double b = 1.5; // Сторона b

    // Обчисляем диаметр шара
    double diameter = 2 * r;

    // Проверяем, может ли шар пройти через отверстие
    if (diameter <= std::min(a, b)) {
        std::cout << "Куля пройде через отвір." << std::endl;
    }
    else {
        std::cout << "Куля НЕ пройде через отвір." << std::endl;
    }

    return 0;
}
