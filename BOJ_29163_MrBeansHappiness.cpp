#include <iostream>
using namespace std;

int main(void) {
    int n, odd = 0, even = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2) odd++;
        else even++;
    }
    if(odd < even)
        cout << "Happy";
    else
        cout << "Sad";
}
