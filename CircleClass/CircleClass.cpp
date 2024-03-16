#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace std;

int fact(int n) {
	if (n <= 1)
	{
		return 1;
	}
	return n * fact(n - 1); // &(5) * &(4) * &(3)...
}

int main()
{
	cout << fact(5) << endl;


    return 0;
}
