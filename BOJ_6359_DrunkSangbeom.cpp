#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        int temp = 1;
        vector<int> room(n + 1, 1);
        for(int j = 2; j <= n; j++) {
            while(j * temp <= n) {
                if(room[j * temp] == 0) room[j * temp] = 1;
                else room[j * temp] = 0;
                temp++;
            }
            temp = 1;
        }
        int cnt = 0;
        for(int i = 1; i <= n; i++) {
            if(room[i] == 1) cnt++;
        }
        cout << cnt << '\n';
    }
}
