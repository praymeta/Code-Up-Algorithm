#include <iostream>
using namespace std;

int arithmetic(int a, int b, char oper) {
    if(oper == '+') return a + b;
    else if(oper == '-') return a - b;
    else if(oper == '*') return a * b;
    else return a / b;
}

int main(void) {
    int k1, k2, k3, ans1, ans2;
    char o1, o2;
    cin >> k1 >> o1 >> k2 >> o2 >> k3;
    ans1 = arithmetic(arithmetic(k1, k2, o1), k3, o2);
    ans2 = arithmetic(k1, arithmetic(k2, k3, o2), o1);
    cout << min(ans1, ans2) << '\n' << max(ans1, ans2);
}
