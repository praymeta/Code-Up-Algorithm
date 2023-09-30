#include <iostream>
using namespace std;

int main(void) {
    int N, width, height, moneySum = 0;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> width >> height;
        if(width == 136)
            moneySum += 1000;
        else if(width == 142)
            moneySum += 5000;
        else if(width == 148)
            moneySum += 10000;
        else
            moneySum += 50000;
    }
    cout << moneySum;
}
