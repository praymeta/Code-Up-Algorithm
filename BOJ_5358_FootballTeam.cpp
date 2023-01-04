#include <iostream>
using namespace std;

int main(void) {
    string name;
    while(true) {
        getline(cin, name);
        if(name == "") {
            break;
        }
        for(int i = 0; i < name.size(); i++) {
            if(name[i] == 'e') {
                name[i] = 'i';
            } else if(name[i] == 'E') {
                name[i] = 'I';
            } else if(name[i] == 'i') {
                name[i] = 'e';
            } else if(name[i] == 'I') {
                name[i] = 'E';
            }
        }
        cout << name << '\n';
    }
}
