#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int t, length[3];
    cin >> t;
    for(int i = 1; i <= t; i++) {
        cin >> length[0] >> length[1] >> length[2];
        sort(length, length + 3);
        cout << "Case #" << i << ": ";
        if(length[0] + length[1] <= length[2]) cout << "invalid!\n";
        else {
            if(length[0] == length[1] && length[1] == length[2]) cout << "equilateral\n";
            else if(length[0] == length[1] || length[1] == length[2]) cout << "isosceles\n";
            else cout << "scalene\n";
        }
    }
}
