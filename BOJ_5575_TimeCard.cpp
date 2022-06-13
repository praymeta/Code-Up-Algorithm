#include <iostream>
using namespace std;

int main(void) {
    int h1, m1, s1, h2, m2, s2;

    for(int i = 0; i < 3; i++) {
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
        if (s1 > s2) {
            s2 = s2 + (60 - s1);
            m1++;
        } else {
            s2 -= s1;
        }
        if(m1 > m2) {
            m2 = m2 + (60 - m1);
            h1++;
        } else {
            m2 -= m1;
        }
        h2 -= h1;
        cout << h2 << ' ' << m2 << ' ' << s2 << endl;
    }
    return 0;
}
