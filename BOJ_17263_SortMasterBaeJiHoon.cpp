#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
    sort(array, array + n);
    cout << array[n - 1];
}
