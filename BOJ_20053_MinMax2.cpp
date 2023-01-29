/*
#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, value;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int max = -1000000;
        int min = 1000000;
        cin >> n;
        for(int j = 0; j < n; j++) {
            cin >> value;
            if(value > max) max = value;
            if(value < min) min = value;
        }
        cout << min << ' ' << max << '\n';
    }
}
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        int array[n];
        for(int j = 0; j < n; j++) {
            cin >> array[j];
        }
        sort(array, array + n);
        cout << array[0] << ' ' << array[n - 1] << '\n';
    }
}
