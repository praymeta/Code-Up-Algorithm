#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    double a, b, c, edge, i = 1;
    while(cin >> a >> b >> c) {
        if(a == 0 && b == 0 && c == 0) break;
        cout << "Triangle #" << i << '\n';
        i++;
        if(a == -1) {
            edge = sqrt(c * c - b * b);
            if(edge > 0) printf("a = %.3lf\n", edge);
            else cout << "Impossible.\n";
        } else if(b == -1) {
            edge = sqrt(c * c - a * a);
            if(edge > 0) printf("b = %.3lf\n", edge);
            else cout << "Impossible.\n";
        } else {
            edge = sqrt(a * a + b * b);
            printf("c = %.3lf\n", edge);
        }
        cout << '\n';
    }
}
