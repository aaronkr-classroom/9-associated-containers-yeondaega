//factorial.cpp
#include <iostream>

using namespace std;

int factorial(int n0) {
	if (n == 0 || n == 1) //�⺻ ���
		return 1;
	else
		return n * factorial(n - 1);
}

int main() {
	int num;
	cout << "Enter a positive int: ";
	cin >> num;
	cout << "n! is" << factorial(num) << endl;
	return 0;
}