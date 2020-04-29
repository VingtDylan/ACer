#include <iostream>
using namespace std;
int main() {
    long long res = 0;
    long long c = 3 * 1000000;
    long long a;
    while (c--) {
        cin >> a;
        res ^= a;
    }
    cout << res << endl;
    return 0;
}

