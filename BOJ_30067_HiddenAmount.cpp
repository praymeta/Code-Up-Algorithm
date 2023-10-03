#include <iostream>
using namespace std;

int main(void) {
    int arr[10], all = 0, temp;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        all += arr[i];
    }
    for(int i = 0; i < 10; i++) {
        temp = all - arr[i];
        if(temp == arr[i]) {
            cout << arr[i];
            return 0;
        }
    }
}
