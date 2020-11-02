//#include<iostream>
//
//using namespace std;
//
//void f(int n, int level){
//    if(n == 0)return ;
//    f(n / 2, level + 1);
//    if(n % 2){
//        if(n / 2)cout<<"+";
//        if(level == 1)cout<<"2";
//        else{
//            cout<<"2(";
//            if(level == 0)cout<<"0";
//            else f(level,0);
//            cout<<")";
//        }
//    }
//}
//
//int main(){
//    int n;cin>>n;
//    f(n,0);
//    cout<<endl;
//    return 0;
//}

#include<iostream>
using namespace std;

string f(int n, int level){
    string res = "";
    if(n == 0) return res;
    res += f(n / 2, level + 1);
    if(n % 2){
        if(n / 2)res += "+";
        if(level == 1)res += "2";
        else{
            res += "2(";
            if(level == 0) res += "0";
            else res += f(level, 0);
            res += ")";
        }
    }
    return res;
}

int main(){
    int n;cin>>n;
    cout<<f(n,0)<<endl;
    return 0;
}