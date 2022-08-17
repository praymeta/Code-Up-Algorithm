#include <iostream>
using namespace std;

int main(void) {
    double x;
    cout.precision(2);
    while(1) {
        cin >> x;
        if(x < 0) {
            break;
        }
        cout << fixed << "Objects weighing " << x << " on Earth will weigh " << x * 0.167 << " on the moon." << endl;
    }
    return 0;
}
