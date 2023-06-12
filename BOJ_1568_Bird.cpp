#include <iostream>
using namespace std;

int main(void) {
    int n, temp = 1, answer = 0;
    cin >> n;
    while(n > 0) {
        if(temp > n) temp = 1;
        n -= temp;
        answer++;
        temp++;
    }
    cout << answer;
}
