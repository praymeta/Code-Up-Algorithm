#include <iostream>
using namespace std;

int main(void) {
    int num1, num2, num3, num4, num5, sum;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    sum = (num1 * num1) + (num2 * num2) + (num3 * num3) + (num4 * num4) + (num5 * num5);
    cout << (sum % 10) << endl;
    return 0;
}
