﻿#include <iostream>
#include <cmath>

using namespace std;

int fact(int n) {
	if (n <= 1)
	{
		return 1;
	}

	return n * fact(n - 1);
}

int main() {
    
	int a = 5;

	cout << fact(a) << endl;
   

    return 0;
}
