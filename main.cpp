#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter numbers (0): " << endl;
    while (true) {
        cin >> num;       
        if (num == 0)    
            break;
        sum += num;       
    }
    cout << "sum = " << sum << endl;

    return 0;
}
