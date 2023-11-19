#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    float arr[9] = {0, };
    int set = 0;
    string num;
    cin >> num;
    for(int i = 0; i < num.length(); i++) {
        int tmp = num[i] - '0';
        if(tmp == 9)
            arr[6]++;
        else
            arr[tmp]++;
    }
    arr[6] = ceil(arr[6] / 2);
    for(int i = 0; i < 9; i++) {
        if(set < arr[i])
            set = arr[i];
    }
    cout << set;
}
