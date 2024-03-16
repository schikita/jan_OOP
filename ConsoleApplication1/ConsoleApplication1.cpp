#include <iostream>

using namespace std;

void summ(int a, int b) {
    cout << a + b << endl;
}

int sum(int a, int b) {
    return a + b;
}

int main() {
    setlocale(LC_ALL, "rus");
    int a = 10, b = 67;
    summ(a, b);

    cout << sum(a, b) << endl;

    summ(100, 67);

    return 0;
}
