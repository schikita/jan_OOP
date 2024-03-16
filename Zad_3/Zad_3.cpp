#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    int result;

    // Использование ассемблерной вставки для сложения двух чисел
    __asm {
        mov eax, a;       // Загрузить значение a в регистр eax
        add eax, b;       // Добавить значение b к значению в регистре eax
        mov result, eax;  // Сохранить результат из регистра eax в переменную result
    }

    std::cout << "Результат сложения: " << result << std::endl;

    return 0;
}
