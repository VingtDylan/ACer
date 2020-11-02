#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const static char T = 'T';
const static char D = 'D';
const static char H = 'H';
const static char E = 'E';
const static double INVALID = 999.0f;

void f(double *t, double *h, double *d){
    if(*t == INVALID){
        *t = *h - 0.5555 * (6.11 * exp(5417.7530 * ((1.0 / 273.16) - (1.0 / (*d + 273.16)))) - 10.0);
    }else if(*h == INVALID){
        *h = *t + 0.5555 * (6.11 * exp(5417.7530 * ((1.0 / 273.16) - (1.0 / (*d + 273.16)))) - 10.0);
    }else if(*d == INVALID){
        *d= 1.0 / ((1.0 / 273.16) - ((log((((*h - *t)/ 0.5555) + 10.0) / 6.11)) / 5417.7530)) - 273.16;
    }
}

int main() {
    while(1){
        bool isEnd = false;
        char c;
        double t,h,d;
        t = h = d = INVALID;
        for(int i = 0; !isEnd && i < 2; i++){
            cin>>c;
            switch (c) {
                case T: cin>>t;break;
                case D: cin>>d;break;
                case H: cin>>h;break;
                case E: isEnd = true;break;
            }
        }
        if(isEnd)break;
        f(&t,&h,&d);
        cout<<fixed<<setprecision(1)<<"T"<<" "<<t<<" "<<"D"<<" "<<d<<" "<<"H"<<" "<<h<<endl;
    }
    return 0;
}