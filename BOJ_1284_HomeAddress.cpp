#include <iostream>
using namespace std;

int main(void) {
    string num;
    while(1) {
        cin >> num;
        if(num == "0") {
            break;
        }
        int size = 1;
        char arr[num.size()];
        for(int i = 0; i < num.size(); i++) {
            size++;
            if(num[i] == '1') {
                size += 2;
            } else if(num[i] == '0') {
                size += 4;
            } else {
                size += 3;
            }
        }
        cout << size << '\n';
        size = 1;
    }
}
