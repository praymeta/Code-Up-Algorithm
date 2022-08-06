#include <iostream>
using namespace std;
int arr0[40];
int arr1[40];

int fibonacci0(int n) {
    if(n == 0) {
        return 1;
    } else if(n == 1) {
        return 0;
    } else if(arr0[n] != 0){
        return arr0[n];
    } else {
        return arr0[n] = fibonacci0(n-1) + fibonacci0(n-2);
    }
}

int fibonacci1(int n) {
    if(n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else if(arr1[n] != 0) {
        return arr1[n];
    } else {
        return arr1[n] = fibonacci1(n-1) + fibonacci1(n-2);
    }
}

int main(void) {
    int trial, num, cnt0, cnt1;
    cin >> trial;
    for(int i = 0; i < trial; i++) {
        cin >> num;
        cnt0 = fibonacci0(num);
        cnt1 = fibonacci1(num);
        cout << cnt0 << ' ' << cnt1 << endl;
    }
    return 0;
}
