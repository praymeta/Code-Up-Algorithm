#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int turtle[4];
    cin >> turtle[0] >> turtle[1] >> turtle[2] >> turtle[3];
    sort(turtle, turtle + 4);
    cout << turtle[0] * turtle[2] << '\n';
}
