#include <iostream>
using namespace std;

int main(void) {
    int T, N;
    cin >> T;
    for(int i = 1; i <= T; i++) {
        cin >> N;
        cout << "Case #" << i << ": ";
        if(N <= 25)
            cout << "World Finals\n";
        else if(N <= 1000)
            cout << "Round 3\n";
        else if(N <= 4500)
            cout << "Round 2\n";
        else
            cout << "Round 1\n";
    }
}
