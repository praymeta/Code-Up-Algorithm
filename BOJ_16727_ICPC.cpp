#include <iostream>
using namespace std;

int main(void) {
    int p1, s1, p2, s2;
    cin >> p1 >> s1 >> s2 >> p2;
    s2 += s1;
    p1 += p2;
    if(s2 == p1) {
        if(s1 > p2) {
            cout << "Esteghlal" << endl;
        } else if(p2 > s1) {
            cout << "Persepolis" << endl;
        } else {
            cout << "Penalty" << endl;
        }
    } else {
        if(p1 > s2) {
            cout << "Persepolis" << endl;
        } else if(s2 > p1) {
            cout << "Esteghlal" << endl;
        }
    }
    return 0;
}
