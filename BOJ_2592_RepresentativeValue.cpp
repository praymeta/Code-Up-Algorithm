#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int value, mode, sum = 0, max_cnt = 0, histogram[100] = {0, };
    for(int i = 0; i < 10; i++) {
        cin >> value;
        histogram[value / 10]++;
    }
    for(int i = 0; i < 100; i++) {
        sum += histogram[i] * i;
        if(max_cnt < histogram[i]) {
            max_cnt = histogram[i];
            mode = i * 10;
        }
    }
    cout << sum << '\n' << mode;
}
