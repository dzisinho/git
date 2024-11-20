#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b) swap(a, b);
    cout << "All numbers: ";
    for (int i = a; i <= b; ++i) std::cout << i << " ";
    cout << "\n";
    cout << "Even numbers: ";
    for (int i = a; i <= b; ++i) if (i % 2 == 0) std::cout << i << " ";
    cout << "\n";
    cout << "Odd numbers: ";
    for (int i = a; i <= b; ++i) if (i % 2 != 0) std::cout << i << " ";
    cout << "\n";
    cout << "Numbers divisible by 7: ";
    for (int i = a; i <= b; ++i) if (i % 7 == 0) std::cout << i << " ";
    cout << "\n";

    return 0;
}
