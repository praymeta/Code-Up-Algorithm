#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string str, char delimiter) {
    vector<string> result;
    stringstream ss(str);
    string tmp;
    while(getline(ss, tmp, delimiter))
        result.push_back(tmp);
    return result;
}

int main(void) {
    vector<string> button;
    string buttonLog;
    int money = 5000;
    getline(cin, buttonLog);
    button = split(buttonLog, ' ');
    for(int i = 0; i < button.size(); i++) {
        if(button[i] == "1")
            money -= 500;
        else if(button[i] == "2")
            money -= 800;
        else if(button[i] == "3")
            money -= 1000;
    }
    cout << money;
}
