#include <iostream>
using namespace std;

int main(void) {
    int s1, s2;
    cin >> s1 >> s2;
    if(s1 * 2 >= s2)
        cout << 'E';
    else
        cout << 'H';
}