#include <iostream>
#include <cstring>

using namespace std;

const int len = 32;
const int N = 1024 + 10;
char s[N];
int buf[len][len], ans;
int t;

void draw(const char* s, int &p, int r, int c, int w){
    char ch = s[p++];
    if(ch == 'p'){
        draw(s, p, r, c + w / 2, w / 2);
        draw(s, p, r, c, w / 2);
        draw(s, p, r + w / 2, c, w / 2);
        draw(s, p, r + w / 2, c + w / 2, w / 2);
    }else if(ch == 'f'){
        for(int i = r; i < r + w; i++){
            for(int j = c; j < c + w; j++){
                if(buf[i][j] == 0) buf[i][j] += 1, ans++;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    scanf("%d", &t);
    while (t--){
        memset(buf, 0, sizeof(buf));
        ans = 0;
        for(int i = 0; i < 2; i++){
            scanf("%s", s);
            int p = 0;
            draw(s, p, 0, 0, len);
        }
        printf("There are %d black pixels.\n", ans);
    }
    return 0;
}

/*
 3
 ppeeefpffeefe
 pefepeefe
 peeef
 peef
 peeef
 peepefefe

 There are 640 black pixels.
 There are 512 black pixels.
 There are 384 black pixels.
 */