#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(void) {
    char arr[8];
    cin >> arr;
    int dec = 0;

    for(int i = strlen(arr) - 1; i >= 0; i--) {
        char n = arr[i];
        if(n >= 48 && n <= 57) {
            dec += (n - 48) * pow(16, (strlen(arr) - 1) - i);
        } else if (n >= 65 && n <= 70) {
            dec += (n - 55) * pow(16, (strlen(arr) - 1) - i);
        }
    }
    cout << dec << endl;
    return 0;
}
