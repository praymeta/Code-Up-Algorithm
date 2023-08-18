#include <iostream>
using namespace std;

int main(void) {
    int t1, e1, f1, t2, e2, f2, max, mel;
    cin >> t1 >> e1 >> f1 >> t2 >> e2 >> f2;
    max = 3 * t1 + 20 * e1 + 120 * f1;
    mel = 3 * t2 + 20 * e2 + 120 * f2;
    if(max > mel)
        cout << "Max";
    else if(mel > max)
        cout << "Mel";
    else
        cout << "Draw";
}
