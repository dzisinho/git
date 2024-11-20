#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    int sum = (b - a + 1) * (a + b) / 2;
    cout << sum << endl;

    return 0;
}
