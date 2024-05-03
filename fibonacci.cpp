#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

// 함수 선언
int fibonacci(int n) {}

int main() {
    int num;
    cout << "Enter n for a Fibonacci series: ";
    cin >> num;
    cout << "Fibonacci at " << num << " is " << fibonacci(num) << endl;
    return 0;
}
