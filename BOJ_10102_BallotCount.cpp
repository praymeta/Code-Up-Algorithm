#include <iostream>
using namespace std;

int main(void) {
    int v, a = 0, b = 0;
    scanf("%d ", &v);
    char arr[v];
    for(int i = 0; i < v; i++) {
        scanf("%c", &arr[i]);
        if(arr[i] == 'A') {
            a++;
        } else {
            b++;
        }
    }
    if(a > b) {
        cout << 'A';
    } else if(b > a) {
        cout << 'B';
    } else {
        cout << "Tie";
    }
}
