#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    for (int i = 2; i <= 10; ++i) {
        cout << k << " x " << i << " = " << k * i << endl;
    }

    return 0;
}
