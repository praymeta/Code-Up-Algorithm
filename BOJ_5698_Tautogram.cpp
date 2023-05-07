#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    string str;
    while(getline(cin, str)) {
        if(str == "*") break;
        vector<int> temp;
        temp.push_back(0);
        for(int i = 1; i < str.length(); i++) {
            if(str[i] == ' ') temp.push_back(i + 1);
        }
        bool chk = true;
        for(int i = 0; i < temp.size(); i++) {
            if(abs(str[0] - str[temp[i]]) == 0 || abs(str[0] - str[temp[i]]) == 32) continue;
            else {
                chk = false;
                break;
            }
        }
        if(chk == true) cout << "Y\n";
        else cout << "N\n";
    }
}
