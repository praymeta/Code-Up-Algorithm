#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int arr[3], a, b, c;
    char crr[3];
    for(int i = 0; i < 3; i++) {
        scanf("%d ", &arr[i]);
    }
    sort(arr, arr + 3);
    for(int i = 0; i < 3; i++) {
        scanf("%c", &crr[i]);
    }
    for(int i = 0; i < 3; i++) {
        if(crr[i] == 'A') {
            cout << arr[0] << ' ';
        } else if(crr[i] == 'B') {
            cout << arr[1] << ' ';
        } else {
            cout << arr[2] << ' ';
        }
    }
}
