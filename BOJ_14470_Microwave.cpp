#include <iostream>
using namespace std;

int main(void) {
    int a, b, c, d, e, time = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    while(1) {
        if (a < 0) {
            time += c;
            a++;
        } else if (a == 0) {
            time += d;
            time+= e;
            a++;
        } else {
            time += e;
            a++;
        }

        if(a >= b) {
            break;
        }
    }
    cout << time << endl;
    return 0;
}
