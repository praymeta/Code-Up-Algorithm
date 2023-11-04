#include <iostream>
using namespace std;

int main(void) {
    int cat = 0;
    char tmp;
    for(int i = 0; i < 225; i++) {
        cin >> tmp;
        if(tmp == 'w')
            cat = 1;
        else if(tmp == 'b')
            cat = 2;
        else if(tmp == 'g')
            cat = 3;
    }
    if(cat == 1)
        cout << "chunbae";
    else if(cat == 2)
        cout << "nabi";
    else if(cat == 3)
        cout << "yeongcheol";
}
