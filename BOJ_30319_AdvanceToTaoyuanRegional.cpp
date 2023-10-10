#include <iostream>
using namespace std;

int main(void) {
    int yyyy, mm, dd;
    scanf("%d-%d-%d", &yyyy, &mm, &dd);
    if(mm < 9)
        cout << "GOOD";
    else if(mm > 9)
        cout << "TOO LATE";
    else {
        if(dd > 16)
            cout << "TOO LATE";
        else
            cout << "GOOD";
    }
}
