#include <iostream>
using namespace std;

int main(void) {
    int a, b, c, d, dog1, dog2, deliver[3], answer[3] = {0, };
    cin >> a >> b >> c >> d;
    for(int i = 0; i < 3; i++) {
        cin >> deliver[i];
        dog1 = deliver[i] % (a + b);
        dog2 = deliver[i] % (c + d);
        if(dog1 <= a && dog1 != 0) answer[i]++;
        if(dog2 <= c && dog2 != 0) answer[i]++;
    }
    for(int i = 0; i < 3; i++) {
        cout << answer[i] << '\n';
    }
}
