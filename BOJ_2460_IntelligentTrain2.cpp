#include <iostream>
using namespace std;

int main(void) {
    int up[10], down[10], tempPeople, maxPeople = 0;
    for(int i = 0; i < 10; i++) {
        cin >> down[i] >> up[i];
        if(i < 1) {
            tempPeople = up[0];
        } else {
            tempPeople = tempPeople - down[i] + up[i];
            maxPeople = max(maxPeople, tempPeople);
        }
    }
    cout << maxPeople;
}
