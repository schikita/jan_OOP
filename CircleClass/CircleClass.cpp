
#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <cstring> // Для работы с строками

using namespace std;

class Circle {
    int radius;

public:
    int hetRadius() {
        return radius;
    }

    void setRadius(int r) { 
        radius = r;
    }
};

int main()
{
    Circle C1;
    C1.setRadius(10);
    cout << "Home work is complete!" << endl;
    cout << C1.hetRadius() << endl;
    return 0;
}
