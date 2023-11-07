#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
   
    int p; cin >> p;

	switch (p)
	{
	case 1: 
		cout << "^ ^\n";
		break;
	case 2:
		cout << "^\n";
		break;
	case 3:
		cout << "Norm\n";
		break;
	case 4:
		cout << "v\n";
		break;
	case 5:
		cout << "v v\n";
		break;
	default: "Вы проверяете не давление\n";
		break;
	}


    return 0;
}
