#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string n, temp;
    int clap = 0;
    cin >> n;
    for(int i = 1; i <= stoi(n); i++) {
        temp = to_string(i);
        for(int j = 0; j < temp.size(); j++) {
            if(temp[j] == '3' || temp[j] == '6' || temp[j] == '9') {
                clap++;
            }
        }
    }
    cout << clap;
}
