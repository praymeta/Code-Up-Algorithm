#include <iostream>
using namespace std;

int main(void) {
    int minkook[4], manse[4], minkookSum = 0, manseSum = 0;
    for(int i = 0; i < 4; i++) {
        scanf("%d", &minkook[i]);
    }
    for(int i = 0; i < 4; i++) {
        scanf("%d", &manse[i]);
    }
    for(int i = 0; i < 4; i++) {
        minkookSum += minkook[i];
        manseSum += manse[i];
    }
    cout << max(minkookSum, manseSum) << endl;
    return 0;

}
