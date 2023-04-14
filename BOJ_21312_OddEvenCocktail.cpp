#include <iostream>
using namespace std;

int main(void) {
    int arr[3];
    bool odd = false;
    int result = 1;

    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
        if(arr[i] % 2 != 0) {
            result *= arr[i];
            odd = true;
        }
    }
    if(odd) cout << result;
    else cout << arr[0] * arr[1] * arr[2];
}
