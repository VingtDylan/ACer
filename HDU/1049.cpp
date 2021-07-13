#include <iostream>
#include <cstring>

using namespace std;

int n, u, d;

int main(){
    while (cin >> n >> u >> d, n){
        int time = 0, dist = 0;
        while (true){
            dist += u;
            time++;
            if(dist >= n) break;
            dist -= d;
            time++;
        }
        cout << time << endl;
    }
    return 0;
}

/*
10 2 1
20 3 1
0 0 0

17
19
 */