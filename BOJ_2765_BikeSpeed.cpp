#include <iostream>
using namespace std;

# define PI 3.1415927

int main(void) {
    float diameter, cycle, time, distance, speed, num = 1;
    while((cin >> diameter >> cycle >> time) && (cycle != 0)) {
        cout.unsetf(ios::fixed);
        cout << "Trip #" << num << ": ";
        distance = diameter * PI * cycle / 12 / 5280;
        speed = distance / time * 60 * 60;
        cout << fixed;
        cout.precision(2);
        cout << distance << ' ' << speed << '\n';
        num++;
    }
}
