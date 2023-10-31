#include <iostream>
using namespace std;

int main(void) {
    int answer, commonMultiple = 100, integer[5];
    for(int i = 0; i < 5; i++) {
        cin >> integer[i];
        commonMultiple = min(commonMultiple, integer[i]);
    }
    while(true) {
        answer = 0;
        for(int i = 0; i < 5; i++) {
            if(commonMultiple % integer[i] == 0)
                answer++;
        }
        if(answer >= 3)
            break;
        commonMultiple++;
    }
    cout << commonMultiple;
}
