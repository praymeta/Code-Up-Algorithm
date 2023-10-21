#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
    int N, apocalypse = 666;
    string temp;
    cin >> N;
    while(N > 0) {
        temp = to_string(apocalypse);
        if(temp.find("666") != string::npos)
            N--;
        apocalypse++;
    }
    cout << temp;
}
