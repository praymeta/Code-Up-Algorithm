#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str;
    int i = 0;
    while(i < 100) {
        getline(cin, str);
        if(str == "")
        break;
        cout << str << endl;
        i++;
    }
    
    return 0;
}
