#include <math.h>
#include <iostream>
using namespace std;

const static double PI = 3.141592654;
const static double HALF_PI = PI / 2;
const static double EACH_AREA = 50;

int diffuse(double x, double y);

int main(void) {
    int testCase = 0;
    cin >> testCase;
    for(int i = 1; i <= testCase; i++) {
        double x, y;
        cin >> x >> y;
        int cnt = diffuse(x, y);
        cout << "Property " << i << ": This property will begin eroding in year " << cnt << '.' << endl;
    }
    cout << "END OF OUTPUT." << endl;
    return 0;
}


int diffuse(double x, double y) {
    double R2 = x * x + y * y;
    double Area = HALF_PI * R2;
    return (int) ceil(Area / EACH_AREA);
}