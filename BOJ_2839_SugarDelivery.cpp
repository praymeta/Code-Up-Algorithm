#include <iostream>
using namespace std;

int main(void) {
    int kg, cnt = 0;
    cin >> kg;

    while(kg > 0) {
        if(kg % 5 == 0) {
            kg -= 5;
            cnt++;
        } else if(kg % 3 == 0) {
            kg -= 3;
            cnt++;
        } else if(kg > 5) {
            kg -= 5;
            cnt++;
        } else{
            cout << -1 << endl;
            break;
        }
    }
    if(kg == 0){
        cout << cnt << endl;
    }
    return 0;
}
