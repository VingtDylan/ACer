#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        vector<int> a(n), h(n, 1);
        int res = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                if(a[j] < a[i]) h[i] = max(h[i], h[j] + 1);
            }
            res = max(res, h[i]);
        }
        cout << res << endl;
    }
    return 0;
}

/*
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    while (cin >> n){
        vector<int> a(n), h(n);
        int res = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            int k = 0;
            while(k < res && h[k] < a[i])k++;
            h[k] = a[i];
            if(k >= res) res++;
        }
        cout << res << endl;
    }
    return 0;
}
 */