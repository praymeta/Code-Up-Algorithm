#include <iostream>
using namespace std;

int main(void) {
    int l, p, n = 5;
    int array[5];
    cin >> l >> p;

    for(int i = 0; i < 5; i++) {
        cin >> array[i];
    }
    
    for(int i = 0; i < 5; i++) {
        printf("%d ", array[i] - (l * p));
    }
    printf("\n");
    return 0;
}
