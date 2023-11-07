
#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <cstring> // Для работы с строками

using namespace std;

class User {
    char name[10];
    int age;

public:
    User(const char n[10], int a) {
        strncpy(name, n, 10); // Копируем содержимое строки n в переменную name
        age = a;
    }

    void show() {
        cout << this->name << endl;
        cout << this->age << endl;
    }
};

int main()
{
    const char n[10] = "Liza"; // Используем const для строковой константы
    User Liza(n, 29); // Передаем массив n, а не элемент массива n[10]
    Liza.show(); // Вызываем метод show() объекта Liza
    return 0;
}
