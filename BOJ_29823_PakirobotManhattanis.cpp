#include <iostream>
#include <cstdlib>
using namespace std;

int main(void) {
    int N, v = 0, h = 0;
    cin >> N;
    string log;
    cin >> log;
    for(int i = 0; i < N; i++) {
        if(log[i] == 'N')
            v++;
        else if(log[i] == 'S')
            v--;
        else if(log[i] == 'E')
            h++;
        else
            h--;
    }
    cout << abs(v) + abs(h);
}
