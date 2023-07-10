#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int s1h, s1m, s1s, s2h, s2m, s2s, rs, rm, rh;
    scanf("%d:%d:%d", &s1h, &s1m, &s1s);
    scanf("%d:%d:%d", &s2h, &s2m, &s2s);
    if(s1h == s2h && s1m == s2m && s1s == s2s)
        cout << "24:00:00";
    else {
        if(s2s >= s1s) {
            rs = s2s - s1s;
        } else {
            rs = s2s + 60 - s1s;
            s2m--;
        }
        if(s2m >= s1m) {
            rm = s2m - s1m;
        } else {
            rm = s2m + 60 - s1m;
            s2h--;
        }
        if(s2h >= s1h) {
            rh = s2h - s1h;
        } else {
            rh = s2h + 24 - s1h;
        }
        printf("%02d:%02d:%02d", rh, rm, rs);
    }
}
