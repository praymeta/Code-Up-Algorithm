#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int a, b, c, l, r, cnt = 0;
    cin >> a >> b >> c;
    int *ap = &a, *bp = &b, *cp = &c;
    l = abs(a - b);
    r = abs(b - c);
    while(r > 1 || l > 1) {
        if(l >= r) {
            c = b - 1;
            swap(*bp, *cp);
            cnt++;
        } else {
            a = b + 1;
            swap(*ap, *bp);
            cnt++;
        }
        l = abs(a - b);
        r = abs(b - c);
    }
    cout << cnt << endl;
    return 0;
}
