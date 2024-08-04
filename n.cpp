#include <iostream>
using namespace std;

int main() {
    int n = 15; // Input number

    for (int i = 1; i <= n; i += 4) {
        cout << i << "    " << i + 1 << endl;
        if (i + 2 <= n) {
            cout << i + 2 << "    " << i + 3 << endl;
        }
    }

    // Check if n is odd, print the last number
    if (n % 4 == 1 || n % 4 == 3) {
        cout << n << endl;
    }

    return 0;
}
