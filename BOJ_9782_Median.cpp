#include <iostream>
using namespace std;

int main(void) {
    int n, cnt = 1;
    cout.precision(1);
    while(cin >> n && n != 0) {
        double array[n];
        for(int i = 0; i < n; i++) cin >> array[i];
        cout << "Case " << cnt << ": ";
        (n % 2) ? cout << fixed << array[(n + 1) / 2 - 1] << '\n' : cout << fixed << (array[n / 2 - 1] + array[n / 2 + 1 - 1]) / 2 << '\n';
        cnt++;
    }
}
