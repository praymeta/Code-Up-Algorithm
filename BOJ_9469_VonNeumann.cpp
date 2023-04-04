#include <iostream>
using namespace std;

int main(void) {
    double a, b, d, f, n, p;
    cin >> p;
    for(int i = 0; i < p; i++) {
        cin >> n >> d >> a >> b >> f;
        printf("%d %0.6lf\n", (int)n, d / (a + b) * f);
    }
}
