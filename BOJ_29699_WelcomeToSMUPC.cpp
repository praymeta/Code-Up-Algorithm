#include <iostream>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    string str = "WelcomeToSMUPC";
    if(N % 14)
        cout << str[N % 14 - 1];
    else
        cout << str[13];
}
