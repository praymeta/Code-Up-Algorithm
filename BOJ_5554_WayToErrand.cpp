#include <iostream>
using namespace std;

int main(void) {
    int n1, n2, n3, n4, sum;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    sum = n1 + n2 + n3 + n4;
    cout << (sum / 60) << '\n' << (sum % 60) << endl;
    return 0;
}
