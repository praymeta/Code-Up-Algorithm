#include <iostream>
using namespace std;

int main(void) {
    string name;
    int year, weight;
    while(1) {
        cin >> name >> year >> weight;
        if(name == "#") {
            break;
        }
        if(year > 17 || weight >= 80) {
            cout << name << " Senior" << endl;
        } else {
            cout << name << " Junior" << endl;
        }
    }
}
