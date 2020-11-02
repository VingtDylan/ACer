#include <iostream>
#include <cstdio>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    double n;
    while (~scanf("%lfd", &n) != EOF && n) {
        int x = 2;
        double sum = 0;
        while (sum <= n) {
            sum += 1.0 / x;
            x++;
        }
        printf("%d card(s)\n", x - 2);
    }
    return 0;
}