#include <iostream>
using namespace std;

int main(void) {
    double h, p;
    while(~scanf("%lf %lf", &h, &p)) {
        printf("%.2lf\n", h / p);
    }
}
