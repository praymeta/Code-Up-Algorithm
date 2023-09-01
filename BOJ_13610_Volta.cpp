#include <iostream>
using namespace std;

int main(void) {
    int X, Y, answer;
    cin >> X >> Y;
    for(answer = 1; (Y - X) * answer < Y; answer++)
        continue;
    cout << answer;
}
