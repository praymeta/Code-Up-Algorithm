#include <iostream>
using namespace std;

int main(void) {
    int n, step, status = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> step;
        status += step;
    }
    if(status > 0)
        cout << "Right";
    else if(status == 0)
        cout << "Stay";
    else
        cout << "Left";
}
