#include <iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    string name[n];
    for(int i = 0; i < n; i++) {
        cin >> name[i];
    }
    for(int i = 0; i < n; i++) {
        if(name[i] == "anj") {
            cout << "뭐야;";
            break;
        }
        if(i == n - 1 && name[i] != "anj") cout << "뭐야?";
    }
}
